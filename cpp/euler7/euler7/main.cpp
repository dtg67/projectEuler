#include <iostream>
#include <cmath>

bool isPrime(const int& num){
    if(num <= 1) return false;
    else if (num == 2) return true;
    else if (num % 2 == 2) return false;
    else{
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<double>(sqrt(num_d)+1);
        
        while (divisor <= upperLimit){
            if (num % divisor == 0){
                prime = false;
            }
            divisor+=2;
        }
        return prime;
    }
}

int main(){
    int i = 2;
    int list = 0;
    while (1) {
        if(isPrime(i)) list++;
        if(list==10001) break;
        i++;
    }
    std::cout << i << std::endl;
    return 0;
}
