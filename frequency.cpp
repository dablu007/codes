#include <bits/stdc++.h>
using namespace std;
void frequency(string input){
	int outputArray[26] ={0};
	for (int i = 0; i < input.length(); ++i){
		outputArray[input[i]-97]++;
	}
	cout << "The frequency for the String is Below" << endl;
	for (int i = 0; i < 26; ++i){
		cout << char(i+97) << " " << outputArray[i] << endl;
	}

}
int main(){
	string input = "abbbaaabbbaaccddee";
	frequency(input);
}