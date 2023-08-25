#include <iostream>

using namespace std;


void sayHi(string name, int age); //use if other void function is written below main

int main()       //main function
{                
    sayHi("Mike", 60);   
    sayHi("Tom", 45);
    sayHi("Steve", 19); 

    return 0;    
}                


void sayHi(string name, int age){               //void means function will not return anything itself
    cout << "Hello " << name << " you are " << age << endl;
}