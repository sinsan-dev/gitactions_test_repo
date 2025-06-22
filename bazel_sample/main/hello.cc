// hello.cc
#include <iostream>

int classify_number(int x) {
    if (x > 0) return 1;
    if (x == 0) return 0;
    return -1;
}

int main() {
    std::cout << "Hello from Bazel!" << std::endl;
    return 0;
}
