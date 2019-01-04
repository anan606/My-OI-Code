#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[101];
int a[10];
int main() {
    for(int i=1;i<=3;i++) {
        memset(s,0,sizeof(s));
        gets(s);
        for(int j=0;j<strlen(s);j++)
        	if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') a[i]++;
    }
    puts(a[1]==5&&a[2]==7&&a[3]==5?"YES":"NO");
    return 0;
}