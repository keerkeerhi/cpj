#include "TestConstructor.h"
#include <iostream>

int main(int argc, char *argv[])
{
    TestConstructor *t = new TestConstructor();
    std::cout << "Hello number ,";
    delete t;
}