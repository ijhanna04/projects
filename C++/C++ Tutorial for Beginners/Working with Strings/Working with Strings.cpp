#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
                   //0123456789

    phrase[0] = 'B'; //Assign the selected character a new character to display

    cout << phrase.length(); //Display how many characters are in the phrase
    cout << phrase[0]; //Access the first character in the phrase

    cout << phrase.find("Academy", 0); //see what index position "Academy" occurs

    //cout << substr(8, 3); //create a new substring at index number 8 and the next two characters

    string phrasesub;                 //
    phrasesub = phrase.substr(8, 3); //store the value of a substring in another string
    cout << phrasesub;

    return 0;
}