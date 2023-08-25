#include <iostream>
using namespace std;
/*
    Pointers are Memory Addresses

    cout << "Age: " << &age << endl;    //Print out Memory Address where the age variable is stored
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
*/

int main()
{

    int age = 19;
    int *pAge = &age;   //stores pointer of age in variable *pAge
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age;   //Prints out pointer for age
    cout << pAge;   //Prints out pointer for age
    cout << *pAge;   //prints out the value stored in the memory address (* dereferences pAge pointer)


    return 0;
}