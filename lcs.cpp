#include <bits/stdc++.h>
using namespace std;
int lcs(string first,string second){
	int m = first.size();
	int n = second.size();
	int dp[m+1][n+1],i,j;
	for ( i = 0; i <= m ; i++){
		for ( j = 0; j <= n; j++) {
			if ( i == 0 || j == 0 ) 
				dp[i][j] = 0;
			else if ( first[i-1] == second[j-1]) 
				dp[i][j] = 1 + dp[i-1][j-1];
			else 
				dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
		}
	}
	return dp[m][n];
}
int main() {
	string first,second;
	cin >> first >> second;
	cout << lcs(first,second);
	return 0;
}
