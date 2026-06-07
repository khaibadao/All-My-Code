#include<bits/stdc++.h>
using namespace std;
int tach(char a){
	return a - 'A' + 1;
}
int main(){
	string s; cin >> s;
	int a[27];
	for(int i = 1 ; i <= 26 ; ++i){
		cin >> a[i];
	}
	long long sum = 0;
	for(int i = 0 ; i < s.size() ; ++i){
		int so = tach(s[i]);
		sum += a[so];
	}
	cout << sum; 
	return 0;
}
