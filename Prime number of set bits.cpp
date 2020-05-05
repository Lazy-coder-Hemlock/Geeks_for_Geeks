#include<bits/stdc++.h>
using namespace std;
int count_bits(int n){
    int res=0;
    while(n){
        n=n&n-1;
        res++;
    }
    return res;
}
bool check(int n){
    if(n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        int store=0;
        for(;l<=r;l++){
            int bit=count_bits(l);
            if(check(bit))
            store++;
        }
        cout<<store<<"\n";
    }
}
