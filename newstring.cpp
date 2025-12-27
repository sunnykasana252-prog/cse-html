// sequence of character is called string 
// the last character of string is null
// strlen() to find length of string
// strrev() to find reverse of string
// strcat() to find addition of string
// strcamp() to find compare of string
// strcpy() to copy of string
// getline(string input function)
//push_back to add an string
//pop_back() to remove an string
// these are predefinded function of string
 # include<bits/stdc++.h>
 using namespace std;
 int main(){
    //char myname[20];  //fix size of an string  // there are enddingcharacter is null /0

    // string myaddress; // this size are dynamic // there are no end character
    // cout<<"original value "<<myaddress<<endl;
    // myaddress.push_back('A');
    //  cout<<"original value "<<myaddress<<endl;
    //  myaddress.pop_back();
    //   cout<<"original value "<<myaddress<<endl;



    // now using all function of string
    
             
      // using function of string
      
      // to find length
    // char str[]="sunny";
//     int l=strlen(str);
//     cout<<l;

    
    //to reverse
//   reverse(str, str + strlen(str));
//     cout << str;

// second method this work on strinng
// string str = "sunny";
// reverse(str.begin(), str.end());
//     cout << str;

// old method to copy
// char str[]="sunny";
//  char str1[20];
//  strcpy(str1,str);
//  cout<<str1;


//safe for exam
char str[]="sunny";
 char str1[20];
strncpy(str1, str, sizeof(str1));
cout<<str1;

 }
