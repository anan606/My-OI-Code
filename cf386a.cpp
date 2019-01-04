#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,Ms=-1e9,Mx,Ss;
	scanf("%d",&n);
	for (register int i=1; i<=n; i++) {
		scanf("%d",&x);
		if (x>Ms) {
			Mx=i;
			Ss=Ms;
			Ms=x;
		}
		if (x>Ss && x<Ms) Ss=x;
	}
	printf("%d %d",Mx,Ss);
	return 0;
}
