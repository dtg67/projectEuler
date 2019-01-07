#include <iostream>

int main(){
    int sumOfSquares = 0;
    int squareOfSum = 0;
    for (int i =1; i <= 100; i++){
        sumOfSquares+=(i*i);
        squareOfSum+=i;
    }
    squareOfSum*=squareOfSum;
    std::cout << squareOfSum-sumOfSquares << std::endl;
    return 0;
}
