#include <iostream>
using namespace std;

class AbstractEmployee {                //Abstract Class (Contract)
    virtual void AskForPromotion() = 0; //Pure Virtual Function (Abstract Function / Method) - Rule for Abstract Class
};

class Employee: AbstractEmployee{        //Employee inherits properties of Abstract Class
private:                                //3 types of access modifiers: private(default)/public/protected
    string Company;
    int Age;
protected:
    string Name;
public:                                 
    void setName(string name){          //setter
        Name = name;
    }
    string getName() {                  //getter
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {          //Class method
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) {          //Constructor
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() {            //Implementation for the Abstract Function in the Abstract Class
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry NO promotion for you!" << endl;

    }

    virtual void Work() {              //All subclasses of Employee can use this function (polymorphism) - 
    // virtual function checks for implimentation of the function in child classes and if yes, execute their code instead
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};                                     //remember semicolon at the end of a class bracket

class Teacher:public Employee {             //public allows Developer access to Employee functions
public:
    string Subject;
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }

    Teacher(string name, string company, int age, string subject) 
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work() {                       //Implimentation of "Work" is different for this specific class
        cout << Name << " is teaching " << Subject << endl;
    }
};

class Developer:public Employee {            //Developer is a child class of Employee 
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;      //Name is in the protected modifier - if it was private, use getName() to access it from the Employee class
    }
    void Work() {
        cout << Name << " is writing code" << endl;
    }
};



int main()
{
/*
Format with default constructor (without Employee constructor):
    Employee employee1;               //employee1 is an object of the Employee class
    employee1.Name = "Saldina";
    employee1.Company = "YouTube";
    employee1.Age = 25;
    employee1.IntroduceYourself();
*/

    Employee employee1 = Employee("Saldina", "YouTube", 25);    //object of the Employee class using the Employee constructor
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    Developer d = Developer("Sally", "Google", 25, "C++");
    d.FixBug();
    d.AskForPromotion();
    d.Work();

    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.PrepareLesson();
    t.Work();

    Employee* e1 = &d;               //Pointer * e1 of the parent class "Employee" holds a reference to the child class "Developer" object d
    Employee* e2 = &t;

    e1->Work();                      //-> Access members using a pointer
    e2->Work();
}

    /*
    Constructor Rules: 
    1. Does not have a return type such as "void"  
    2. Has the same name as the class it belongs to
    3. Must be public (at least at this level of knowledge)
    Note: When a constructor is created, the default constructor is lost
    */

   /*
   Four Principles of Object Oriented Programming:
   1. Encapsulation
        - bundling together data using methods that operate on that data
        - objects are grouped together within a class
        - functions that provide access to the encapsulated properties of a class through its methods
            - (getters and setters)
   2. Abstraction
        - Hiding complex things behind a procedure that makes those things appear simple
   3. Inheritance
        - Parent/Base Classes and Child/Derived  Classes
            - Child Class inherits all the properties of a Parent Class but can add properties exclusive to the Child Class
   4. Polymorphism
        - the ability of an object or method to have many forms
        - Most common use is when a parent class reference is used to refer to a child class object
   */