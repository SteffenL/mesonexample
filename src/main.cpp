#include <zlib.h>
#include <iostream>

int main() {
    std::cout << "zlib version: " << zlibVersion() << std::endl;

    return 0;
}
