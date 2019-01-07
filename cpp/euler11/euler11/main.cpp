//
//  main.cpp
//  euler11
//
//  Created by dgomez on 7/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <string>

int main(int argc, const char * argv[]) {
    std::vector<std::vector<long int>> data;
    std::ifstream file("/Users/dgomez/Desktop/projectEuler/euler11/euler11/grid.txt");
    std::string line;
    
    while(std::getline(file, line)){
        std::vector<long int>   lineData;
        std::stringstream  lineStream(line);
        long int value;
        while(lineStream >> value){
            lineData.push_back(value);
        }
        
        data.push_back(lineData);
    }
    long int max = 0;
    long int vert = 0;
    long int horz = 0;
    long int diag = 0;
    long int revdiag = 0;
    // Horizontal
    for(int i = 0; i < data.size(); i++){
        for(int j = 0; j < data[i].size()-3; j++){
            horz = data[i][j]*data[i][j+1]*data[i][j+2]*data[i][j+3];
            if(horz > max) max = horz;
        }
    }
    // Vertical
    for(int i = 0; i < data.size() - 3; i++){
        for(int j = 0; j < data[i].size(); j++){
            vert = data[i][j]*data[i+1][j]*data[i+2][j]*data[i+3][j];
            if(vert > max) max = vert;
        }
    }
    // Diagonal
    for(int i = 0; i < data.size() - 3; i++){
        for(int j = 0; j < data.size() - 3; j++){
            diag = data[i][j]*data[i+1][j+1]*data[i+2][j+2]*data[i+3][j+3];
            revdiag = data[i+3][j]*data[i+2][j+1]*data[i+1][j+2]*data[i][j+3];
            if(diag > max) max = diag;
            if(revdiag > max) max = revdiag;
            
        }
    }
    
    std::cout << max << std::endl;
    return 0;
}
