#include<bits/stdc++.h>
using namespace std;
int main(){
    // syntax
    // int arr[5];
    // arr[0]=7;
    // arr[1]=4;
    // arr[2]=5;
    // arr[3]=0;
    // arr[4]=20;
    // cout<<arr[0]<<endl;
    // arr[0]=90;
    // cout<<arr[0]<<endl;

    //printing output and taking input
    // int arr[5];
    //    for(int i=0;i<=4;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<=4;i++){
    //     cout<<arr[i]<<" ";
    // }

   
	// initilizer the arry
// 	int arr[]={7,8,4,9,7,89,5,45,45};
// // //      finding size of arry
// int n= sizeof(arr)/sizeof(arr[0]);
// 	for (int i=1;i<=n-1;i++){
// 	    cout<<arr[i]<<" ";
// 	}
		// size of operator
// 		int x;
// 		cout<<sizeof(x);

// //      finding size of arry
// int n= sizeof(arr)/sizeof(arr[0]);
	
	//int size=10,b[size];             // this not give arry
//	int b[size],size[10];              // this line give error because till now arry not declear 
	
		// variable size arry
// 		int n;
// 		cout<<"enter  arry size: ";
// 		cin>>n;
//       	int	arr[n];
//       	for(int i=0;i<n;i++){
//       	    cin>>arr[i];
//       	}
	
//       	for(int i=0;i<n;i++){
//       	    cout<<arr[i]<<" ";
//        	}
// memory allocation in arry is contigous 
// addres of arry 
// int arr[]={1,2,3,4};
// cout<<arr[0]<<endl;
// cout<<arr[1]<<endl;
// cout<<arr[2]<<endl;
// cout<<arr[3]<<endl;

// sum in arry
// int sum=0;
// 		int n;
// 		cout<<"enter  arry size: ";
// 		cin>>n;
//       	int	arr[n];
//       	for(int i=0;i<n;i++){
//       	    cin>>arr[i];
//       	}
	
//       	for(int i=0;i<n;i++){
//       	    sum+= arr[i];
      	  
//         	}
// 	cout<<sum;

// product of arry of all element
// int z=1;
// 		int n;
// 		cout<<"enter  arry size: ";
// 		cin>>n;
//       	int	arr[n];
//       	for(int i=0;i<n;i++){
//       	    cin>>arr[i];
//       	}
	
//       	for(int i=0;i<n;i++){
      	     
//       	  z=z*arr[i];
//         	}
// 	cout<<z;
		
		// liner search
// 		int arr[]={7,8,4,9,7,89,5,45,45};
// int n= sizeof(arr)/sizeof(arr[0]);
// int x;
// cout<<"enter target :";
// cin>>x;
// bool flag = false;       /// false means absent;
// 	for (int i=0;i<n;i++){
// 	 if(arr[i]==x){
// 	     flag = true;  // true means present
// 	    break;
// 	 }
// 	}
// 	if(flag==true) cout<<x<<"  is present";
// 	else 
// 	cout<<x<<" is not present";
	
	// maximum value out of alla element
// 			int arr[]={7,8,4,9,7,89,5,45,45};
// int n= sizeof(arr)/sizeof(arr[0]);
// int mx=arr[0];
// for(int i=1;i<n;i++){
//     // there are two type to find an maximum arr 1 is
//   // if(mx<arr[i]) mx=arr[i];
//   // second is
//   mx =max(mx,arr[i]);
// }
// 	cout<<mx;

// mininum value of arry		
// int arr[]={7,8,4,9,7,89,5,45,45};
// int n= sizeof(arr)/sizeof(arr[0]);
// // int mx=arr[0];
// // int mn=arr[0];
// int mx=INT_MIN;
// int mn=INT_MAX;
// for(int i=1;i<n;i++){
//     // there are two type to find an maximum arr 1 is
//   // if(mx<arr[i]) mx=arr[i];
//   // second is
//   mx =max(mx,arr[i]);
//   mn=min(mn,arr[i]);
// }
// 	cout<<mx<<" "<<mn;

// SECOND MAXIMUM element
// int arr[]={7,8,4,9,7,89,5,45,45};
// int n= sizeof(arr)/sizeof(arr[0]);
// // int mx=arr[0];
// // int mn=arr[0];
// int mx=INT_MIN;
// int smx=INT_MIN;
// for(int i=1;i<n;i++){

//     // there are two type to find an maximum arr 1 is

//   // if(mx<arr[i]) mx=arr[i];

//   // second is

//   mx =max(mx,arr[i]);
// }for(int i=1;i<n;i++){
//     if(smx<arr[i] && arr[i]!=mx)
//     smx=arr[i];
// }
// 	cout<<mx<<" "<<smx;
//predict the output  
// int sub[50],i;
// for(i=0;i<=48;i++);   // yaha par loop chalaga par emty body ka sath
// {
//     sub[i]=i;
//     cout<<sub[i]<<endl;  //or yaha par output daga 49
// }


// passing arry to function

return 0;
}