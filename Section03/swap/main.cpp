#include "swap.h"

int main(int argc, char **argv)
{
    swap myswap123(1, 2);
    std::cout << "Before swap:" << std::endl;
    myswap123.printInfo();

    myswap123.run();

    std::cout << "After swap:" << std::endl;
    myswap123.printInfo();

    return 0;
}