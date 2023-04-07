#include <iostream>
using namespace std;

// Comparison of the Greater Value of Two Numbers
int getMax(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){           // == equal to, != not equals, > greater than, < less than, >= greater than or equal to, <= less than or equal to
        result = num1;                          // = equals for assignment
    }   else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }   else {
        result = num3;
    }

    return result;
}

int main()
{
    cout << getMax(200, 200, 10);
    return 0;
}