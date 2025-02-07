#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="Tetrahedron")cnt+=4;
        else if(str=="Cube")cnt+=6;
        else if(str=="Octahedron")cnt+=8;
        else if(str=="Dodecahedron")cnt+=12;
        else cnt+=20;
    }
    cout<<cnt<<endl;
    return 0;
}