#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=1,maxi=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cnt++;
        }else{
            if(cnt>maxi){
                maxi = cnt;
            }
            cnt=1; 
        }
    }
    // cout<<cnt;
    if(cnt>maxi){
        maxi = cnt;
    }
    cout<<maxi<<endl;
    return 0;
}