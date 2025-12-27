#include <bits/stdc++.h>
using namespace std;


//// function call itself is called recursion 

//  big problem depend on  small problem is called recursion

// base condition determine where we stop 
// in base condition return is mendatory 



// int factorial(int n) {
//     if (n == 0 || n == 1)       
//         return 1;
//     else
//         return n * factorial(n - 1);   
// }

// int main() {
//     int num;
    
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num < 0) {
//         cout << "Factorial of negative numbers does not exist.";
//     } else {
//         cout << "Factorial of " << num << " = " << factorial(num);
//     }

//     return 0;
// }
int factorial (int n){
    if(n==0)           ///  this is the base condition
    return 1;
  
    return n*factorial(n-1);

}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}