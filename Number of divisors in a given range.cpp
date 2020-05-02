#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int l,r,m,n;
        cin>>l>>r>>m>>n;
        int count=0;
        for(;l<=r;++l){
            if(l%m==0 || l%n==0)
            ++count;
        }
        cout<<count<<"\n";
    }
}
