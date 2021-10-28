#include <iostream>

using namespace std;

int main()
{

    int n,n1,n2,r1,r2;

    cout << "Enter a number: ";
    cin>>n;

    r1 = n - 1;
    r2 = n + 1;

    cout <<"Number entered: "<<n<< endl;
    cout <<"Its predecessor: "<<r1<<endl;
    cout <<"Its successor: "<<r2<<endl;

    return 0;
}
