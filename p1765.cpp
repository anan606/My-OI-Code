#include<iostream>
#include<string>
using namespace std;
int ans;
string a;
int num[26]= {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main() {
    getline(cin,a);
    for(int i=0; i<a.length(); i++) {
        if(a[i]>='a'&&a[i]<='z') ans+=num[a[i]-'a'];
        if(a[i]==' ') ans++;
    }
    cout<<ans<<endl;
    return 0;
}
