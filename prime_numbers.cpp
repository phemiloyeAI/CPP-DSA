#include <iostream>

void print_prime_numbers(int start, int end)
{   
    std::cout << "prime numbers: ";
    int n = 0;

    for(int i = start; i<=end; ++i)
    {
        bool isPrime = true;
        for(int j = start; j<i; ++j)
        {   

            if (i % j == 0)
            {   
                isPrime = false;
                break;
            }
        }
    
        if (isPrime)
        {
            std::cout << i  <<  " ";
            ++n;
        }   
    }

    std::cout<<std::endl;
    std::cout<<"Prime numbers in range " << start << "-" << end << ": " << n << std::endl;
}


int main()
{
    print_prime_numbers( 2, 1000 );
    
    return 0;
}
