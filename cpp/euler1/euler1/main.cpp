//
//  main.cpp
//  euler1
//
//  Created by dgomez on 4/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int start=3;
    int sum=0;
    for (int i=start; i <= 1000; i++) {
        if ( i%3 == 0 || i%5 == 0) sum+=i;
    }
    std::cout << sum << std::endl; 
    return 0;
}
