#include <iostream>
#include "SVString.h"

int main()
{
    CSVString str1;
    str1.setSize(10);

    std::cout << "Size of str1: " << str1.getSize() << std::endl;

    std::cin.get();

    return 0;
}
