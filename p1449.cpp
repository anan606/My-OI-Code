#include<iostream>
#include<cstring>
using namespace std;
char s[1001];
int stack[600];
int comp(char s[1001]){
	int top=0,x;
	unsigned int i=0;
	while(i<=strlen(s)-2){
		switch(s[i]){
			case '+':
				stack[--top]+=stack[top+1];
				break;
			case '-':
				stack[--top]-=stack[top+1];
				break;
			case '*':
				stack[--top]*=stack[top+1];
				break;
			case '/':
				stack[--top]/=stack[top+1];
				break;
			default:
				x=0;
				while(s[i]!='.') x=x*10+s[i++]-'0';
				stack[++top]=x;
				break;
		}
		i++;
	}
	return stack[top];
}
int main(){
	cin.getline(s,1001);
	cout<<comp(s)<<endl;
	return 0;
}
