#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int litre = k*l;
    int x = litre/nl;
    int lime = c*d;
    int salt = p/np;
    cout<<min(x,min(lime,salt))/n<<endl;
    return 0;
}