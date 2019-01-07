//
//  main.cpp
//  euler9
//
//  Created by dgomez on 7/11/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <cmath>

int PerfSquare(const int &csq){
    int n = 0;
    int root(round(sqrt(csq)));
    if(csq == root*root) return root;
    else return n;
}

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int size = 1000;
    bool found = false;
    
    for(a = 1; a < size/3; a++){
        for(b = a; b < size/2; b++){
            c = size - a - b;
            
            if(a*a + b*b == c*c){
                found = true;
                break;
            }
        }
        
        if(found) break;
    }
    std::cout << a*b*c << std::endl;
    return 0;
}
