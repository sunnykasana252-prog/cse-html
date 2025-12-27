# include <bits/stdc++.h>
using namespace std;
int main()
// {
// int temp,size;
// cin>>size;
// int a[size];
// cout<<"enter any element";
// for(int i=0;i<size;i++)
// {
//     cin>>a[i];
// }
// for(int i=0;i<size;i++)
// {for(int j=0;j<size-i-1;j++)
// {
//     if(a[j]>a[j+1])
//     {
//         temp=a[j];
//         a[j]=a[j+1];
//         a[j+1]=temp;
//     }
// }
// }
// cout<<"the rental arry "<<endl;
// for( int i=0;i<size;i++)
// cout<<a[ i ];
// return 0;
// }

// code for matrix subtruction
// {
//     int a[3][3],c[3][3],b[3][3],i,j;
// cout<<"enter firt matrix";
// for( i=0;i<3;i++)
// {
    
// for( j=0;j<3;j++)
// {
//     cin>>a[i][j];
// }
// }
// cout<<"enter second matrix ";
// for(i=0;i<3;i++)
// {
//     for( j=0;j<3;j++){
    
//     cin>>b[i][j];
// }
// }
// cout<<"the sum of matrix"<<endl;
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++)
//     {

// c[i][j]=a[i][j]+b[i][j];
// cout <<c[i][j]<<" ";
//     }
// }
// return 0;
// }
// {
//     int a[3][3],c[3][3],b[3][3],i,j;
// cout<<"enter firt matrix";
// for( i=0;i<3;i++)
// {
    
// for( j=0;j<3;j++)
// {
//     cin>>a[i][j];
// }
// }
// cout<<"enter second matrix ";
// for(i=0;i<3;i++)
// {
//     for( j=0;j<3;j++){
    
//     cin>>b[i][j];
// }
// }
// cout<<"the sum of subtruction"<<endl;
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++)
//     {

// c[i][j]=a[i][j]-b[i][j];
// cout <<c[i][j]<<" ";
//     }
// }
// return 0;
// }


// arry for multiplicationn

// {
//     int a[3][3],c[3][3],b[3][3],i,j;
// cout<<"enter firt matrix";
// for( i=0;i<3;i++)
// {
    
// for( j=0;j<3;j++)
// {
//     cin>>a[i][j];
// }
// }
// cout<<"enter second matrix ";
// for(i=0;i<3;i++)
// {
//     for( j=0;j<3;j++){
    
//     cin>>b[i][j];
// }
// }
// cout<<"the sum of subtruction"<<endl;
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++)
//     {

// c[i][j]=a[i][j]-b[i][j];
// cout <<c[i][j]<<" ";
//     }
// }
// return 0;
// }

// for transepose of array
// transpose of matrix
// {
//     int a[3][3],i,j;
//     cout<<"enter the matrix";
//     cin>>a[3][3];
//     for(j=0;j<3;j++)
//     {
//     for (i=0;i<3;i++)
//     {
//         cout<<a[i][j]<<" ";
//     }
//        cout<<endl;
//     }
// return 0;
// }


// to print matrix
// {
//     vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//    cout<< " print matrix"<<endl;;
//    for(int i=0;i<matrix.size();i++){
//     for(int j=0;j<matrix[i].size();j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;
// }

// {
//     vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//    cout<< " print matrix"<<endl;;
//    for(int i=0;i<matrix.size();i++){
//     for(int j=0;j<matrix[i].size();j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;
// }

{
    vector<vector<char>>charracter={{'a','b','c','d'},{'z','q','i','t'}};
    cout<<"print character "<<endl;
    for (int i=0;i<charracter.size();i++){
         for (int j=0;j<charracter[i].size();j++){
            cout<<charracter[i][j]<<" ";
         }
         cout<<endl;
    }
return 0;
}