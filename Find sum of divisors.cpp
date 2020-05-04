#include<bits/stdc++.h>
using namespace std;
int cal(int dig){
    int res=0;
    vector<int>v;
    for(int i=1;i<=sqrt(dig);i++){
        if(dig%i==0){
            v.push_back(i);
            if(i!=sqrt(dig)){
                v.push_back(dig/i);
            }
        }
    }
    res=accumulate(v.begin(),v.end(),0);
    return res;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        vector<int>first;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                first.push_back(i);
                if(i!=sqrt(num)){
                    first.push_back(num/i);
                }
            }
        }
        int store=0;
        for(auto i:first)
            	store+=cal(i);
        cout<<store<<"\n";
        
    }
}
