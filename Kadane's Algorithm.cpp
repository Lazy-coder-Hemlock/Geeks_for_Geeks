#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
     int size;
     cin>>size;
     int *arr=new int[size];
     for(int i=0;i<size;i++)cin>>arr[i];
     int res=INT_MIN;
     int a=0;
     for(int i=0;i<size;i++){
         a+=arr[i];
         res=max(res,a);
         a=max(a,0);
     }
     cout<<res<<" ";
     cout<<"\n";
 }
}
