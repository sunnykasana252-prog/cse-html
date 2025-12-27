# include <bits/stdc++.h>
using namespace std;
int main(){

    //while loop 


    // for print n number
// int n;
// cin>>n;
// int i=1;

// while(i<=n){
//     cout<<i<<" ";
//     i++;
// }

// for sum of n mumber
// int n;
// cin>>n;
// int i=1;
// int sum=0;
// while(i<=n){
// sum = sum+i;
// i++;
// }
// cout <<sum;

/// prime number

int n;
cin>>n;
int i=2;
while (i<n){
    if (n%i==0){
        cout<<"not prime for "<<i<<endl;
    }
    else{
        cout<<"prime for "<<i;
    }
    i++;

}

    return 0;
}