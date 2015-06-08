/* kadane algorithm */
#include <bits/stdc++.h>
using namespace std;
int maximumContinuousSum(int input[]){
	int sum = 0,maximumContinuousSum = 0;
	for (int i = 0; i < 10; ++i){
		sum = sum + input[i];
		if (sum < 0){
			sum = 0;
		}
		if ( maximumContinuousSum < sum ){
			maximumContinuousSum = sum;
		}
	}
	return maximumContinuousSum;
}
int main(){
	int input[10];
	for ( int i = 0; i < 10; i++){
		cin >> input[i];
	}
	cout << maximumContinuousSum(input) << endl;
	return 0;
}