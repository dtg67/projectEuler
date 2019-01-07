//
//  main.cpp
//  euler12
//
//  Created by dgomez on 7/18/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>

long int triangleNumber(long int const &length){
    long int triangle = 0;
    for(long int i = 0; i < length; i++){
        triangle += i;
    }
    return triangle;
}

int main(){
    long int finalAnswer = 0;
    for(long int j = 2; j < LONG_MAX; j++){
        
        int divisors = 2;
        long int n = triangleNumber(j);
        for(long int i = 2; i < static_cast<int>(floor(sqrt(n))); i++){
            if(n%i == 0) divisors += 1;
            if(divisors >= 249) break;
        }
        if(divisors >= 249){
            finalAnswer = n;
            break;
        }
    }
    std::cout << finalAnswer << std::endl;
    return 0;
}
