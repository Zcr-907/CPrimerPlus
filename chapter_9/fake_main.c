#include "../chapter1/chapter_1.h" /* 引入头文件*/
/**
 * gcc main.c ../chapter1/ chapter_1.h ../chapter_1/chapter_1.c
 * 对三个文件同时进行编译后,执行./a.o 即可调用
 */
int fake_main() {
    // 2.函数调用
    print_hello();
    return 0;
}
