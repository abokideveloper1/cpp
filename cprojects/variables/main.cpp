
#include <iostream>
using namespace std;

int main(){

    //Type;
    //Type name = value;

    /* */

    //

    int lifes = 0; //10,25
    char letter = 'B'; //'B'
    double decimal = 5.2; //2.5999999999999
    float decimal2 = 5.2; //2.5
    bool alive = true; //true / false
    string name = "Alexandre"; // "Alexandre"

    cout << "Enter number of lives: ";
    cin >>lifes;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << "Enter a money value: ";
    cin >> decimal;
    cout << "Enter your name: ";
    cin >> name;

    lifes = 100;

  cout << lifes <<endl;
    cout << letter <<endl;
    cout << decimal <<endl;
    cout << decimal2 <<endl;
    cout << alive <<endl;
    cout << name <<endl;
    return 0;
}
