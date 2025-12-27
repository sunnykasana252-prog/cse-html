# include<bits/stdc++.h>
using namespace std;
int main()
{
    
  //  simple pattern
//     int i,j;
    
//     for(int i=1;i<=5;i++)
//   {
//     for(int j=1;j<=5;j++)
//     {
//         cout<<"*";
    
// }
// cout<<endl;
//   }

///    for prymid using loop
// int n;

//   for (int i=1;i<5;i++){
//       for(int j=1;j<=5-i;j++){
//           cout<<" ";
//       }
//           for(int k=1;k<=(2*i-1);k++){
//               cout<<"*";
//           }
//       cout<<endl;
//   }
  
  //   for kite
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++) {
//       for(int j=1;j<=n-i;j++){
//           cout<<" ";
//       }
//       for(int k=1;k<=(2*i-1);k++){
//           cout<<"*";
//       }
//       cout<<endl;
//   }
//   for(int i=n-1;i>=1;i--) {
//       for(int j=1;j<=n-i;j++){
//           cout<<" ";
//       }
//       for(int k=1;k<=(2*i-1);k++){
//           cout<<"*";
//       }
//       cout<<endl;
//   }
  //patern for triangle
  // int n;
  // cin>>n;
  // for(int i=1;i<n;i++){
  //     for(int j=1;j<=n-i;j++){
  //         cout<<" ";
  //     }
  //     for( int k=1;k<=i;k++){
  //     cout<<"*";
  //     }
  //      cout<<endl;
  //  }
  

  // for(int i=1;i<=n;i++){
  //     for( int j=1;j<=i;j++){
  //     cout<<"*";
  // }
  // cout<<endl;
  // }
  // for(int i=1;i<=n;i++){
  //     for( int j=1;j<=n-i;j++){
  //     cout<<"*";
  // }
  // cout<<endl;
  // }

  // by while lop
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"*";
        j++;
    }
    cout<<endl;
i++;
  }
return 0;
} 
