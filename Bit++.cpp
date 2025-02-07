#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    string str;
    while(n>0){
        cin>>str;
        if(str == "X++" || str == "++X") x++;
        else if(str == "X--" || str == "--X") x--;
        n--;
    }
    cout<<x<<endl;
    return 0;
}