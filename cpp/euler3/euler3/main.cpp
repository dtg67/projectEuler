//
//  main.cpp
//  euler3
//
//  Created by dgomez on 4/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <cmath>
const int long END=600851475143;
int main(int argc, const char * argv[]) {
    int long fact=0;
    int long max=0;
    for(int long i=1;i < END; i++){
        if (END%i == 0){
            fact = i;
            for(int long j=1;j < fact; j++ ){
                if (fact%j == 0) break;
                else max=j;
            }
        }
    }
    std::cout << max << std::endl;
    return 0;
}
