#include<iostream>
#include<cmath>
using namespace std;
int a[15];
int main() {
	int b, B, A;
	for(int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> b;
	B = b + 30;
	int c = 0;
	for(int i = 1; i <= 10; i++) {
		if(a[i] <= B)
			c++ ;
	}
	cout << c;
	return 0;
}