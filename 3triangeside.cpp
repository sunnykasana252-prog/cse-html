#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"enter side 1 : ";
    cin>>a;
    int b;
    cout<<"enter side 2 : ";
    cin>>b;
    int c;
    cout<<"enter side 3 : ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b )
    {
        cout<<" valid triangle";

    }
    else{
        cout<<"not valid triangle ";

    }
}