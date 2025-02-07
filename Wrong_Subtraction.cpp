#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(k--){
        int digit = n%10;
        if(digit==0)n/=10;
        else n-=1;
    }
    cout<<n<<endl;
    return 0;
}