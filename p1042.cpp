#define regint register int
#define DEBUG printf("[Passing [%s] in line %d.]\n", __func__, __LINE__)
#define putline putchar('\n')
#define putsp putchar(' ')
typedef long long ll;
#include<cstdio>
#include<string>
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
struct Match {
  private:
	int a, b, type;
	string out;
  public:
	Match():a(0), b(0), type(0) {}
	Match(int type):a(0), b(0), type(type) {}
	~Match() {}
	void clear() {
		a = b = 0;
	}
	void Make_result() {
		stringstream Ss;
		string s;
		Ss << a << ':' << b;
		Ss >> s;
		out += s + '\n';
	}
	void Checkend() {
		if((a >= type || b >= type) && abs(a - b) >= 2) {
			Make_result();
			clear();
		}
	}
	void puta() {
		a++;
		Checkend();
	}
	void putb() {
		b++;
		Checkend();
	}
	void Write() {
		Make_result();
		cout << out;
	}
};
int main() {
	Match P11 = 11, P21 = 21;
	char c;
	cin >> c;
	while(c != 'E') {
		if(c == 'W') {
			P11.puta();
			P21.puta();
		} else {
			P11.putb();
			P21.putb();
		}
		cin >> c;
	}
	P11.Write();
	putline;
	P21.Write();
	return 0;
}
