#include <iostream>  
#include <cstdio> 
using namespace std;
int a,b,x,y,k;
void gcd(int a,int b) {
    if(b==0) {
        x=1;
        y=0;
        return;
    }
    gcd(b,a%b);
    k=x;
    x=y;
    y=k-a/b*y;
    return;
}
int main() {
    cin>>a>>b;
    gcd(a,b);
    cout<<(x+b)%b;
}