#include<iostream>
using namespace std;
int main () {
	int a, b, s, Max = 0, i, d = 0; 
	for (i = 1; i < 8; i++) {
		cin >> a >> b;
		s = a + b;
		if ((s > Max) && (s > 8)) Max = s, d = i;
	}
	cout << d << endl;
	return 0;
}