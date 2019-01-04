#include <iostream>
using namespace std;
int dp[10005];
int main() {
	int pain[10005];
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> pain[i];
	for (int i = 0; i < n; i++)
		for (int j = m; j >= pain[i]; j--)
			dp[j] = max(dp[j], dp[j - pain[i]] + pain[i]);
    cout << (dp[m] ? dp[m] : -1) << endl;
    return 0;
}