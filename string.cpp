// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
    // string str="i am the best";
    // cout<<str.size();// by size


    // cout<<str.length();// by length


    // for (char ch : str)
    // cout<<ch;//by for loop 
    
    
    // by using multiple condition
    // string str="abcd@#ef49&*()67";
    // for(char ch:str)
    // // cout<<str.isalpha()<<str.isdigit()<<str.isupper()<<str.islower();
    // {
    //     if(isalpha(ch))
    //     cout<<"Yes";
    //     else if(isdigit(ch))
    //     cout<<"no.";
    //     else if(isupper(ch))
    //     cout<<"U";
    //     else if (islower(ch))
    //     cout<<"lower";
        
    // }
     
//      string str="abcedsrt";
//      string a;
//      a=str.substr(pow)
//      cout<<str.substr;
//     return 0;

// string using substring
// }
//   string str = "abcedsrt";
//     string a;

   
//     a = str.substr(2, 3); 

//     cout << a << endl; // Print the extracted substring 'a'

   
//     string b = str.substr(0);
//     cout << b << endl;


// to find
// string str ="vgyugjbjjb";
//  string a;
//  cout<<str.find("gy");

// to swap
// string str ="jnibidscb";
// string a="hygf";
// swap(str,a);
// cout<<str<<endl;
// cout<<a;

// to compare


// wap in c++ tp check the  student is simpe or complex sum of even and sum is odd is complex
// string str="sunny";
// int sum=0;
// int a;
// for(char ch:str)
// {
//     a=int(ch);
//     int sum=sum+a;
    
// }
// if(sum%2==0)
// cout<<"simple";
// else
// cout<<"complex";


//  sum of no using string
// string str="123";
// int sum=0;
// for(char ch:str)
// {
//     if (isdigit(ch)){
//         sum += ch-'0';
      
//     }
// }
//   cout<<"sum="<<sum;


// sum of two string
// char si,s2;
// cin>>s1>>s2;
// int n1=s1-'0';
// int n2=s2-'0';
// int sum=0;


//  sum=n1+n2;
// cout<<sum;

// for multiplication

// string str="3245";
// int num1=0 , num2=0;
// int num;
// for(char ch : str)
// {
//     num1=ch-'0';
//     num=num1*10+num1;
// }
// for(char ch : str)
// {
//     num2=ch-'0';
//     num1=num2*10+num2;
// }
// cout<<"num1 ="<<num1<<endl;
// cout<<"num2="<<num2<<endl;


//     return 0;
// }

// {
//     int K,M,N;
//     cin>>k>>M>>N;
//     string 5;
//     cin>>5;
//     int value=0;
//     for(int i=0;i<k;i++){ 
//     int acsiVal =int(s[i]);
//     if(acsiVal>=N || acsiVal<=N)
//     {
//         value++;
//     }
//     }
//     cout<<value;
// retirn 0;

// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int K, N, M;
//     cin >> K >> N >> M;

//     string S;
//     cin >> S;

//     int cnt = 0;

//     for (int i = 0; i < K; i++) {
//         int asciiVal = int(S[i]);
//         if (asciiVal >= N && asciiVal <= M) {
//             cnt++;
//         }
        
//     }

//     cout << cnt;

//     return 0;
// }
 
// {
// int K,M,N;
// cin>>K;
// cin>>M>>N;
// string s;
// cin.ignore();
// getline(cin,s);
// int count =0;
// for(int i=0; i<=K ;i++)
// {
//     if(int (s[i])>=N && int(s[i])<=M)
//     {
//         count++;
//     }

// }


// cout<<count;

// }
// {
// int K,M,N;
// cin>>K;
// cin>>M>>N;
// string s;
// cin.ignore();
// getline(cin,s);
// int count =0;
// for(int i=0; i<=K ;i++)
// {
//     if(int (s[i])>=N && int(s[i])<=M)
//     {
//         count++;
//     }

// }


// cout<<count;
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

//  int main()
//  {
//     int N, K;
//     cin >> N >> K;

//     string S;
//     cin >> S;

//     string result = S.substr(K, N - 2 * K);

//     cout << result;

//     return 0;
// }

//for cut the length of string
// {
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     cin.ignore();
//     getline(cin, s);
//     string result = s.substr(k,n-2*k);
//     cout<<result;
//     return 0;
// }

// rotate the strinng

//     #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, K;
//     cin >> N >> K;

//     string s;
//     cin >> s;

//     K = K % N;

//     string rotated = s.substr(K) + s.substr(0, K);

//     cout << rotated;

//     return 0;
// }

// {
//     int n,k;
//     cin>>n>>k;
//     string s,res;
//     cin.ignore();
//     getline(cin,s);
//     res=s.substr(k,n-k)+s.substr(0,k);
//     cout<<res;
//     return 0;
// }

//rotate form last

// {
//     int n,k;
//     cin>>n>>k;
//     string s,res;
//     cin.ignore();
//     getline(cin,s);
//     res=s.substr(n-k,k)+s.substr(0,n-k);
//     cout<<res;
//     return 0;
// }

//transforme the capital letter into small letter and moving the special caracter into last

//  {       
//     int l;
//     string s,str;
//     cin>>l>>s;
//     for(int i=0;i<l;i++){
//         if
//         (s[i]>=65 && s[i]<=90)
//         str=str+char(s[i]+32);
//         else if
//         (s[i]>=97 && s[i]<=122 || s[i]>=0 && s[i]<='9')
//         str =str+s[i];
//         else
//         str=str+s[i];
//     }
//     cout<< str+s;
//     return 0 ;
// }

// alphabat  using function string square if even rotate right and  if  odd rotate left 


