#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    return n && !(n&(n-1));
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        for(int i=k;i>=0;i--){
            if(check(i)){
                cout<<i;
                break;
            }
        }
        cout<<"\n";
    }
}
