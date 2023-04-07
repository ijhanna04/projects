#include <iostream>
using namespace std;


double cube(double num){
    double result = num * num * num;   //shortcut: return num * num * num
    return result; //return tells C++ that code is done being executed within the function
                   //code written after return in the function will not be read by C++
}

int main()
{

    double answer = cube(5.0);
    cout << answer;

    //shortcut: cout << cube(5.0);

    return 0; 
}


