#include <iostream>

using namespace std;

int main()
{
    float s1,s2,av;

    cout<<"Enter first exam score: ";
    cin>>s1;
    cout<<"Enter second exam score: ";
    cin>>s2;
    cout<<" "<<endl;

    av = (s1 + s2)/2;

    cout<<"Those scores "<<s1<<" and "<<s2<<", equals an average of "<<av<<endl;
    return 0;
}
