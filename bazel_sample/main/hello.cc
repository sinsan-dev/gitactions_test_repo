// hello.cc
#include "hello.h"

int classify_number(int value) {
    if (value > 0) return 1;
    else if (value == 0) return 0;
    else return -1;
}

// main() は書かないこと！！
