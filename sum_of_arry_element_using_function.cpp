// sum of arry element 
// # include<bits/stdc++.h>
// using namespace std;

// int sum(int arr[5])
// {
//     int result=0;
//     for(int i=0;i<5;i++)
//     result=result+arr[i];
//      return result;
// }
// int main()
// {
    
//     int a[5]={10,20,50,40};
//     int total;
//     total=sum( a);
//     cout<<"the sum of arry is "<<total;
//     return 0;
// }
// unsized arry or empty
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int arr[],int n){
//     int result=0;
//     for(int i=0;i<n;i++)
//     result=result+arr[i];
//     return result;
// }
// int main()

// {
//     int a[]={10,20,30,40,50,60,70,80};
//     int total;
//     total=sum(a,8);
//     cout<<"the sum of arry element is "<<total;
//     return 0;
// }
//biggest of no wih arry

# include <bits/stdc++.h>
using namespace std ;
int biggest(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {if(arr[i]>max)
    max=arr[i];
    }
    return max;
    
}
int main()
{
    int a[]={10,20,30,40,590,60,70,80};
    int total;
    int size = sizeof (a)/sizeof (a[0]);
    total=biggest(a,size);  // function calling
    cout<<"the biggest no is"<<total;
    return 0;
}