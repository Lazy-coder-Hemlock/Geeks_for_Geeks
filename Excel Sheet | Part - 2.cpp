#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int p=0;
        int res=0;
        for(int i=s.length()-1;i>=0;i--){
            res+=(s[i]-'A'+1)*pow(26,p);
            p++;
        }
        cout<<res<<endl;
        
    }
}
