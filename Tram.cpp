#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int cnt=0,maxi=0;
    for (int i = 0; i < n; i++)
    {
       cin>>a>>b;
       cnt-=a;
       cnt+=b;
       maxi = max(maxi,cnt);
    }
    cout<<maxi<<endl;
    return 0;
}