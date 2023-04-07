#include <iostream>
#include <cmath>


using namespace std;

int main()
{


    cout << 5 + 7; //addition
    cout << 5 - 7; //subtraction
    cout << 5 * 7; //multiplication
    cout << 5 / 7; //division

    cout << 10 % 3; //(read as 10 mod 3) shows the remainder of 10 / 3

    //Math follows the order of operations (PEMDAS)


    int wnum = 5;
    double dnum = 5.5;

    wnum++; //adds 1 to wnum
    wnum--; //subtracts 1 from wnum
    wnum += 80; //adds 80 to wnum
    
    cout << wnum;

    cout << 10 / 3; //doing math with integers yields outcomes with only integers
    cout << 10.0 / 3.0; //making one or both numbers decimal numbers yields the true outcome


    //require #include <cmath> (math functions):
    cout << pow(2, 5); //2 raised to the power of 5
    cout << sqrt(36); //square root of 36
    cout << round(4.3); //round a decimal to the nearest whole number
    cout << ceil(4.1); //round a decimal number up
    cout << floor(4.8); //round a decimal number down
    cout << fmax(3, 10); // outputs which number is bigger
    cout << fmin(3, 10); // outputs which number is smaller


    return 0;
}