#设置可执行文件名称
set(BIN_NAME demo)
#头文件路径
include_directories(../inc/hi 
                    ../inc/hello 
                    ../my_lib 
                    )
#源文件路径
aux_source_directory(./hi HI_SRC_LISTS)
aux_source_directory(./hello HELLO_SRC_LISTS)
aux_source_directory(./ MAIN_HELLO_SRC_LISTS)
#库文件路径
link_directories(${ROOT_PATH}/lib)
#要生成的可执行文件名及其依赖的源文件
add_executable(${BIN_NAME} ${MAIN_HELLO_SRC_LISTS} ${HI_SRC_LISTS} ${HELLO_SRC_LISTS})
#要生成的可执行文件名及其依赖的库文件
target_link_libraries(${BIN_NAME} mylib)
#设置可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
