#include<iostream>
using namespace std;
int a[1000]= {0},b[1000]= {0},c[1000]= {0},d[1000]= {0},n,s;
void print() {
    int i;
    s++;
    if(s<=3) {
        for(i=1; i<=n; i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int search(int i) {
    int j;
    for(j=1; j<=n; j++) {
        if(b[j]==0&&c[i+j]==0&&d[i-j+n]==0) {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+n]=1;
            if(i==n)print();
            else search(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+n]=0;
        }
    }
}
int main() {
    cin>>n;
    search(1);
    cout<<s<<endl;
    return 0;
}
