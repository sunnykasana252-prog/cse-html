// #include <bits/stdc++.h>

// using namespace std;

// bool isArmstrong(int num) {
//     int original = num;
//     int digits = 0;

//     int temp = num;
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
//     }

   
//     temp = num;
//     int sum = 0;
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }

//     return sum == original;
// }

//int main() {
//     int lower, upper;

//     cout << "Enter lower limit: ";
//     cin >> lower;
//     cout << "Enter upper limit: ";
//     cin >> upper;

//     cout << "Armstrong numbers between " << lower 
//          << " and " << upper << " are:\n";

//     for (int i = lower; i <= upper; i++) {
//         if (isArmstrong(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool isArmstrong(int num) {
//     int original = num;

    
//     int digits = 0;
//     int n = num;
//     while (n > 0) {
//         digits++;
//         n /= 10;
//     }

    
//     n = num;
//     int sum = 0;

    
//     while (n > 0) {
//         int digit = n % 10;

       
//         int power = 1;
//         for (int i = 0; i < digits; i++) {
//             power *= digit;
//         }

//         sum += power;
//         n /= 10;
//     }

//     return sum == original;
// }

// int main() {
//     int lower, upper;

//     cout << "Enter lower limit: "<<endl;
//     cin >> lower;
//     cout << "Enter upper limit: "<<endl;
//     cin >> upper;

//     cout << "Armstrong numbers between " << lower <<endl
//          << " and " << upper << " are:";

//     for (int i = lower; i <= upper; i++) {
//         if (isArmstrong(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// bool isArmstrong(int num) {
//     int original = num;

    
//     int digits = 0;
//     int n = num;
//     while (n > 0) {
//         digits++;
//         n /= 10;
//     }

    
//     n = num;
//     int sum = 0;

//     while (n > 0) {
//         int digit = n % 10;

        
//         int power = 1;
//         for (int i = 0; i < digits; i++) {
//             power *= digit;     
//         }

//         sum += power;
//         n /= 10;
//     }

//     return sum == original;
// }

// int main() {
//     int lower, upper;

//     cout << "Enter lower limit: ";
//     cin >> lower;
//     cout << "Enter upper limit: ";
//     cin >> upper;

//     cout << "Armstrong numbers between " << lower
//          << " and " << upper << " are: ";

//     for (int i = lower; i <= upper; i++) {
//         if (isArmstrong(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int lower, upper;

//     cout << "Enter lower limit: "<<endl;
//     cin >> lower;
//     cout << "Enter upper limit: "<<endl;
//     cin >> upper;

//     cout << "Armstrong numbers between " << lower <<endl
//          << " and " << upper << " are: ";

//     for (int num = lower; num <= upper; num++) {

//         int original = num;

        
//         int digits = 0;
//         int n = num;
//         while (n > 0) {
//             digits++;
//             n /= 10;
//         }

        
//         n = num;
//         int sum = 0;

//         while (n > 0) {
//             int digit = n % 10;

           
//             int power = 1;
//             for (int i = 0; i < digits; i++) {
//                 power *= digit;
//             }

//             sum += power;
//             n /= 10;
//         }

        
//         if (sum == original) {
//             cout << original << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;
// int main()
//{
//     int l, u,ctr=0;
//     cin>>l>>u;
//   for  (int i=l; i<=u;i++)
//     string s=to_string(i);
//     int len= s.length();
//     int sum =0;
//     int n=i;
//     while(n>0)
//     {
//         int r=n%10
//         n=n/10;
//         sum=sum+(int)pow(r,len)
//     }
//     if (sum ==i){
//         ctr++;
//         cout<<i<" ";
        
//     }
// }
// if(ctr==0)
// cout<<-1;
// return 0;}

//  # include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n,x;
//     cout<<" enter the no : ";
    
//      cin>>x;
//      while()
     
     
//  }
#include <iostream>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter lower limit: "<<endl;
    cin >> lower;
    cout << "Enter upper limit: "<<endl;
    cin >> upper;

    cout << "Jumping numbers between " << lower << " and " << upper << " are: "<<endl;

    for (int num = lower; num <= upper; num++) {

        int n = num;
        bool isJumping = true;
         
        if (n < 10) {
            cout << num << " ";
            continue;
        }

        int prevDigit = n % 10;
        n /= 10;

        while (n > 0) {
            int currentDigit = n % 10;

            if (abs(currentDigit - prevDigit) != 1) {
                isJumping = false;
                break;
            }
            prevDigit = currentDigit;
            n /= 10;
        }
        if (isJumping) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
