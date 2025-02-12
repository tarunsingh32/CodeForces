#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    cin>>sum;
    int i=1,temp=1,cnt=0;
    while(temp<= sum){
        temp = (i*(i+1))/2;
        if(temp>sum)break;
        sum-=temp;
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
    return 0;
}