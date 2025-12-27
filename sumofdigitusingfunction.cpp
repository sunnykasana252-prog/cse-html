// #include<bits/stdc++.h>
// using namespace std;
// int sod(int);
// int main ()
// {
//     int n,f;
//     cout<<"enter the no";
//     cin>>n;
//     f=sod(n);
//     cout<<"the sum of digit "<<f;
//     return 0;

// }
//  int sod( int n )
// {

//     if(n==0)
//     return 0;
//     else
//     return(n%10+sod(n/10)) ;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int);
// int main ()
// {
//     int n,f;
//     cout<<"enter the no";
//     cin>>n;
//    f= factorial(n);
//     cout<<"the sum of digit "<<f;
//     return 0;

// }
//  int factorial( int n )
// {

//     if(n==0||n==1)
//     return 1;
//     else
//     return(n*factorial(n-1)) ;

// }
//sum of n no
// #include<bits/stdc++.h>
// using namespace std;
// int son(int);
// int main()
// {
//     int n,f;
//     cout<<"enter how many no you want to add";
//     cin>>n;
//     cout<<"enter "<<n<<" number";
//     f=son(n);
//     cout<<"sum ="<<f;
//     return 0;

// }
// int son(int n)
// {
//     int num,sum=0;
//     if(n==0)
//     return 0;
//     else
//     
//     return n+sum(n-1);
// }
//palindrome
#include<bits/stdc++.h>
using namespace std;


int reversenumber(int n, int rev=0)
{
    if(n==0)
    return rev;
    return reversenumber(n/10,rev*10+(n%10));
}
bool palindrome(int num){
    int rev=reversenumber(num);
    return(rev == num);
}
int main(){
    int num;
    cout<<"enter a no ";
    cin>>num;
   if( palindrome(num))
   cout<<"palindrome number";
   else
   cout<<" not a palindrome";

}