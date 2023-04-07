#include <iostream>
using namespace std;


int main()
{

    /*cout << numberGrid[0][1];  //print out number in specified number grid position*/
    int numberGrid[3][2] = {
                            {1, 2},     //Number Grid Position: (0,0), (0,1)
                            {3, 4},     //                      (1,0), (1,1)
                            {5, 6}      //                      (2,0), (2,1)
                        };
    
    for(int i = 0; i < 3; i++){         //iterates over each individual array {x, y}
        for(int j = 0; j < 2; j++){     //iterates over each element inside each array
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}