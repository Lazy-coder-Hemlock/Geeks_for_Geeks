#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int arr2[],int size1,int size2){
    int i,j;
    i=j=0;
    while(i<size1 && j<size2){
        if(arr[i]==arr2[j]){
            i++;
            j++;
        }
        else
        i++;
    }
    return j==size2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int size1,size2;
        cin>>size1>>size2;
        int *arr=new int[size1];
        int *arr2=new int[size2];
        for(int i=0;i<size1;i++)cin>>arr[i];
        for(int i=0;i<size2;i++)cin>>arr2[i];
        sort(arr,arr+size1);
        sort(arr2,arr2+size2);
        if(check(arr,arr2,size1,size2))cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}
