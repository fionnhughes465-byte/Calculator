#include "myFunctions.h"
#include <iostream>
#include <cmath>
#include <list>
using namespace std;

int iAdd(int a, int b){
    return a + b; 
}

int iSub(int a, int b){
    return a - b; 
}

int iMult(int a, int b){
    return a * b; 
}

double divideXbyY(double x, double y){
    if(y == 0){
        return 0.0;
    }
    
    return x / y;
}

int divideXbyY(int x, int y){
    if(y == 0){
        return 0;
    }

    return x / y;
}

double Log(double x){
    if(x <= 0){
        return 0.0;
    }
    return log(x);
}

double Sqrt(double x){
    if(x < 0){
        return 0.0;
    }
    return sqrt(x);
}

void sortPrint(int i, int j, int k){
    list<int> nums = {i,j,k};
    nums.sort(std::greater<int>());

    for (int n : nums) {
        std::cout << n << " ";
    }
}

double myCalculator(double a, char op, double b){
    switch(op){
        case '+':
            cout << iAdd(a,b) << std::endl;
        break;

        case '-':
            cout << iSub(a,b) << std::endl;
        break;

        case '/':
            cout << divideXbyY(a,b) << std::endl;
        break;

        default: //'*'
            cout << iMult(a,b) << std::endl;

    }

    return 0.0;
}
