#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
     int arr[3]={x1,x2,x3};
     sort(arr,arr+3);
     int meet = arr[1];
     cout<<abs(x1-meet)+abs(x2-meet)+abs(x3-meet)<<endl;


    return 0;
}