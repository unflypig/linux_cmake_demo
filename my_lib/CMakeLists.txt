cmake_minimum_required(VERSION 2.8)
#定义库的源文件
aux_source_directory(./ MY_LIB_SRC)
#生成静态库
add_library(mylib_static STATIC ${MY_LIB_SRC})
#生成动态库
add_library(mylib_shared SHARED ${MY_LIB_SRC})
#指定库文件名称，若不加此项则生成的库文件名称为add_library的第一个参数
set_target_properties(mylib_static PROPERTIES OUTPUT_NAME "mylib")
set_target_properties(mylib_shared PROPERTIES OUTPUT_NAME "mylib")
#设置库文件输出的路径PROJECT_SOURCE_DIR为项目根目录
set(LIBRARY_OUTPUT_PATH ../../lib)
