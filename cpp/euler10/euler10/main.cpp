//
//  main.cpp
//  euler10
//
//  Created by dgomez on 7/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <cmath>

bool isPrime (const long int &num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        long int divisor = 3;
        double num_d = static_cast<double>(num);
        long int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

int main(int argc, const char * argv[]) {
    long int size = 2e6;
    long int sum = 0;
    for(long int i = 0; i < size; i++){
        if(isPrime(i)) sum+=i;
    }
    std::cout << sum << std::endl;
}
