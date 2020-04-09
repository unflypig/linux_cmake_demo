/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   文件名称：main.c
*   创 建 者：zt
*   创建日期：2019年11月14日
*   描    述：
*
================================================================*/


#include <stdio.h>
#include "hi.h"
#include "hello.h"
#include "nihao.h"
int main(int argc, char* argv[]){
#ifdef DEBUG
    printf("This is a debug info only show in debug mode!\n");
#endif
    hi();
    hello();
    nihao();
    return 0;
}
