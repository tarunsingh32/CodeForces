#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w ;
    cin>>k>>n>>w;
    int s = (w*(2*k+(w-1)*k))/2;
    if(s<= n){
		cout <<0<<"\n";
	}
    else cout<<s-n<<endl;
    return 0;
}