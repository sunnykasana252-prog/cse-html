#include<bits/stdc++.h> 
using namespace std;
// void value(int &n){
//     n=20;
    
// }
// int main()
// {
// int n;
// n=10;
// value(n);
// cout<<n;

//  }

// pattern printing prymid using character
int main() {
	
    int n;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<< " ";
        }
         char ch='A';
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<ch;
                ch++;
               
            }
           
     cout<<endl;
   
        }
      
    return 0;
}