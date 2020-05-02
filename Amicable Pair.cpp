#include<bits/stdc++.h>
using namespace std;
int check_pairs(int f,int s){
    vector<int>first;
	vector<int>v;
    for(int i=1;i<=sqrt(f);i++){
        if(f%i==0){
            first.push_back(i);
            if(i!=sqrt(f))
            first.push_back(f/i);
        }
    }
   // for(auto i:first)cout<<i<<" ";
    int a1=accumulate(first.begin(),first.end(),0);
    bool f1=false;
    a1-=f;
    if(a1==s)
    f1=true;
    for(int i=1;i<=sqrt(s);i++){
        if(s%i==0){
            v.push_back(i);
            if(i!=sqrt(s))
            v.push_back(s/i);
        }
    }
    int b1=accumulate(v.begin(),v.end(),0);
    bool a2=false;
    if(b1-s==f)
    a2=true;
    return f1&&a2;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(check_pairs(a,b))
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
    }
	//code
	return 0;
}
