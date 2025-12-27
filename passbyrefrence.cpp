#include <bits/stdc++.h>
using namespace std;
void  pattern(int z)
{
    
   for(int i=1;i<=z;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}
    
int main()
{
int z ;
cout<<"enter  the no of rows"<<endl;
cin>>z;
pattern(z);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
//  void swap(int a, int b)
// {
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     cout<< "the swaping value are "<<a<<b;
// }
    
// int main()
// {
//     int a, b, c ;
//     cin>>a>>b;
    
//     swap(a,b);
//     cout<<"the value  after swaping are  "<<a<<b;
//     return 0;
    
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int  sum(int a,int b);
// int calcuate()
//      {
//     int a,b,c;
//     cin>>a>>b;
//     c=sum(a,b);
//     return c;

// }
// int sum(int a, int b)
// {
//     return(a+b);
// }
// int main()
// {
//     int c;
//     c=calcuate();
//     cout<<"the sum of two no : "<<c;
//     return 0;
// }
