#include <iostream>
#include "SVString.h"

int main() 
{
    CSVString str;
    int i32Size = 10;
    str.setSize(i32Size);

    if (str.getSize() != i32Size)
     {
        std::cerr << i32Size << "Test failed: expected 10\n" << str.getSize();
        return 1;
    }

    std::cout << "Test passed\n";
    return 0;
}