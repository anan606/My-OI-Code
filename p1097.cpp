#include<iostream>
#include<cstdio>
#include<algorithm>
const int maxN=1500000;
using namespace std;
struct node {
    int k;
    int c=1;
    bool operator<(node b){
        return k<b.k;
    }
} a[maxN];
int n;
void INPUT() {
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i].k;
    return;
}
void work() {
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++) {
        if(a[i].k==a[i+1].k) {
            a[i].k=0;
            a[i+1].c+=a[i].c;
        }
        if(a[i].k!=0)
            cout<<a[i].k<<" "<<a[i].c<<endl;
    }
    return;
}
int main() {
    INPUT();
    work();
    return 0;
}
