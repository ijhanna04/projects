#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 19; //change the first element in the array to 19

    cout << luckyNums[0]; //access the first element in the array (4)

    int luckyNums[20] = {4, 8, 15, 16, 23, 42}; //tell array desire to store 20 elements in the array

    luckyNums[10] = 100; //change the 10th element in the array to 100

    int luckyNums[20]; //use to assign elements separately

    return 0;
}