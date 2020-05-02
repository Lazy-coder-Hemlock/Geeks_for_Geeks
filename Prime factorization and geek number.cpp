#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 while(n--){
     int num;
     cin>>num;
        vector<int>v;
        bool b=true;
     for(int i=2;i<=sqrt(num);i++){
         if(num%i==0){
             int count=0;
             while(num%i==0){
                 num/=i;
                 count++;
             }
             v.push_back(count);
         }
             if(num>1){
                 v.push_back(1);
             }
             
         }
     for(auto i:v){
         if(i!=1)
         {
             b=false;
             break;
         }
     }
     if(b)cout<<"Yes"<<"\n";
     else cout<<"No"<<"\n";
 }
}
