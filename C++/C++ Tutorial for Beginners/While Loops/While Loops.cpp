#include <iostream>
using namespace std;

int main()
{

    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index++;                // ++ adds one to index
    }                           /* if index++ was not added, it would be an infinite loop
                                   since the index would always be 1 and 1 < 5 */

    /* do{                      //executes the code in the loop first then checks for the condition after
        cout << index << endl;
    }while (index <= 5);
    */

    return 0;
}
