#include<iostream>
#include<cmath>
#include<string>
#include<stack>
using namespace std;
string a;
stack<char> st;
int main() {
    int n,m,s=0;
    cin>>n;
    getline(cin,a);
    cin>>m;
    int len=a.length();
    for(int i=len-1,j=0; i>=0; i--,j++)
        if(n>10&&a[i]>'9')
            s+=pow(a[i]-'A',j);
        else
            s+=pow(a[i]-'0',j);
    while(s) {
        if(m>10&&(48+s%m)>'9')
            st.push('A'+s%m);
        else
            st.push(48+s%m);
        s/=m;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return 0;
}
