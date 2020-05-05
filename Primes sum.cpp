#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num==1)
        cout<<"No";
        else if(!(num&1))
        {
            if(num>2)
            cout<<"Yes";
            else
            cout<<"No";
        }
        else{
            if(check(num-2)){
                cout<<"Yes";
            }
            else
            cout<<"No";
        }
        cout<<"\n";
        
    }
}
