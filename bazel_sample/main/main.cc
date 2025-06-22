#include "hello.h"
#include <iostream>

int main() {
    int input = 42;
    int result = classify_number(input);
    std::cout << "分類結果: " << result << std::endl;
    return 0;
}