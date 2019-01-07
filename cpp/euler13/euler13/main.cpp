//
//  main.cpp
//  euler13
//
//  Created by dgomez on 7/19/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <boost/multiprecision/cpp_int.hpp>
int main(int argc, const char * argv[]) {
    unit256_t totalSum = 0;
    std::vector<unsigned long long int> listOfNumbers;
    std::ifstream file("/Users/dgomez/Desktop/projectEuler/euler13/euler13/digits.txt");
    std::string line;
    while(std::getline(file,line)){
        std::stringstream lineStream(line);
        unsigned long long int longNumber;
        lineStream >> longNumber;
        listOfNumbers.push_back(longNumber);
    }
    for(int i = 0; i < listOfNumbers.size(); i++){
        std::cout << listOfNumbers[i] << std::endl;
        //totalSum += listOfNumbers[i];
    }
    //std::string stringSum = std::to_string(totalSum);
    //for(int j = 0; j < 10; j++){
    //    std::cout << stringSum << std::endl;
    //}
    return 0;
}


