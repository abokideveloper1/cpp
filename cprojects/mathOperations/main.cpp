#include <iostream>

using namespace std;

int n1,n2;//Global variables

int main()
{

        int n3,n4; //Local variables

        //Operators: + - / * % ()

        int r,r1,r2;

        n1 = 11;
        n2 = 3;
        n3 = 5;
        n4 = 2;
        r = (n1+n2)*n4;
        r1 = n1/n2;
        r2 = n1%n2;

        cout<<"Sum equals: " << r <<endl;
        cout<<"Division equals: " << r1 <<endl;
        cout<<"Mod equals: " << r2 <<endl;


    return 0;
}
