#include<iostream>  
using namespace std;  
int main(){  
    int a,b,c,d,h,m;  
    cin>>a>>b>>c>>d;  
    int aa=a+1,bb=60-b,cc=c,dd=d;  
    h=cc-aa;m=bb+dd;  
    if(m>=60){  
        h++;  
        m-=60;  
    }  
    cout<<h<<" "<<m;  
    return 0;  
}  