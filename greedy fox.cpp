#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        int *arr=new int[size];
        for(int i=0;i<size;i++)cin>>arr[i];
        int res=0;
        for(int i=0;i<size;i++){
        int start=arr[i];
        while(i+1<size and arr[i+1]>arr[i]){
            start+=arr[i+1];
            i++;
        }
        res=max(start,res);
        }
        cout<<res<<endl;
    }
}
