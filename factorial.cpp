#include <iostream>
#include <cstdint>

uint32_t factorial( uint32_t n )
{   
    uint32_t res = 1;
    for( uint32_t i = n; i > 0; --i)
    {
        res *= i;
    }
    return res;
}

int main()
{   
    uint32_t n;

    std::cout << "Enter a positive number greater than zero" << std::endl;
    std::cin >> n;

    uint32_t fact = factorial( n );
    std::cout << n << "! = " << fact << std::endl;
    return 0;
}