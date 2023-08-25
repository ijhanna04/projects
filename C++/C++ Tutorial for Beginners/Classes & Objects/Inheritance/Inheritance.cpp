#include <iostream>
using namespace std;

class Chef {        //superclass
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{        //subclass   //ItalianChef inherits the functions of Chef
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makePasta();

    return 0;
}