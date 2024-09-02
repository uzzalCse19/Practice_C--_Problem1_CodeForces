#include<iostream>
#include<utility>
using namespace std;
int main()
    {
       int n,max=-100000001;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) {
       cin>>arr[i];
       if(arr[i]>max) max=arr[i];
     
    }
   cout<<max<<endl;
    }