#include<iostream>
using namespace std;
int main() {
	char in[51];
	int n, j;
	cin>>n>>in;
	for(j = 0; in[j] != '\0'; j++)
		cout<<char((in[j]-'a'+n)%26+'a');
}
