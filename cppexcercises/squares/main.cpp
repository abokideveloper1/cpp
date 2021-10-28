#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double s2,s3,square,n;

    cout << "Enter a number" << endl;
    cin>>n;

    s2 = n*2;
    s3 = n*3;
    square = sqrt(n);

    cout<<"Double: "<<s2<<endl;
    cout<<"Triple: "<<s3<<endl;
    cout<<"Square: "<<square<<endl;
    return 0;
}
