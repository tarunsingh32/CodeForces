#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int cnt=0;
     while(n!=0){
        int digit = n%10;
        if(digit ==4 || digit ==7)cnt++;
        n/=10;
     }
     if(cnt==4 || cnt ==7)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    return 0;
}