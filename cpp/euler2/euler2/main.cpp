//
//  main.cpp
//  euler2
//
//  Created by dgomez on 4/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
const int END=4e6;

int main(int argc, const char * argv[]) {
    int fibFirst=1;
    int temp=0;
    int fibSecond=2;
    int sum=0;
    while (fibSecond < END){
        if(fibSecond%2==0) sum += fibSecond;
        temp = fibSecond;
        fibSecond+=fibFirst;
        fibFirst=fibSecond;
    }
    std::cout << sum << std::endl;
    return 0;
}
