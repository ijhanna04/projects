#include <iostream>
using namespace std;

int main()
{

    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index++;
    }

    for(int i = 1; i <= 5; i++){ // for(initialize variable; specify looping guard/condititons; specify line of code to be executed with every iteration of the loop)
        cout << i << endl;       // equivalent to above while loop
    }

    int nums[] = {1, 2, 5, 7, 3};   //for loops in an array
    for(int i = 0; i < 5; i++){    //for(int i = first element; i < number of elements in the array; i++ )
        cout << nums[i] << endl;    //prints integers in elements up to the 4th element
    }               


    return 0;
}