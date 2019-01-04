#include<iostream>
using namespace std;
int a[101][101]= {{0,1,2},{1,0,2},{1,2,0},{2,1,0},{2,0,1},{0,2,1},{0,1,2}};
int main() {
	int m,n;
	cin>>n>>m;
	n%=6;
	cout<<a[n][m]<<endl;
	return 0;
}
