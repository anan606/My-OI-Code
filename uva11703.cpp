#include<bits/stdc++.h>
using namespace std;
const int Mod=1e6;
int n,a[1000005];
int main() {
    a[0]=1;
    for(int i=1;i<=1000000;i++) a[i]=(a[int(i-sqrt(i))]+a[int(log(i))]+a[int(i*sin(i)*sin(i))])%Mod;
    while(cin>>n) {
        if(!~n) break;
		cout<<a[n]<<endl;
    }
    return 0;
}