#include "myFunctions.h"
#include <iostream>
using namespace std;

int main(){

    double a,b;
    char op;
    
    cout << "Enter a calculation : " << endl;
    cin >> a >> op >> b;
    //cout << a << endl;
    //cout << op << endl;
    //cout << b << endl;
    
    myCalculator(a,op,b);

    int x;
    int y;
    int z;

    cout << "Enter a Number : " << endl;
    cin >> x;
    cout << "Enter another Number : " << endl;
    cin >> y;
    cout << "Enter one more Number : " << endl;
    cin >> z;
    
    sortPrint(x,y,z);

    return 0;
}