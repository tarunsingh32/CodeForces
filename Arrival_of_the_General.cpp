#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int maxe = x, mine =x,  maxi =0,mini=0;
    for(int i=1;i<n;i++){
        cin>>x;
        if(x>maxe){
            maxe = x;
            maxi =i;
        }
        if(x<=mine){
            mine =x;
            mini =i;
        }
    }
    cout<<maxi + (n-1-mini)-(mini<maxi?1:0)<<endl;
    return 0;
}