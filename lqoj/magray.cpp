#include<bits/stdc++.h>
using namespace std;
string s[1000];
int main()
{
	int n; cin >> n;
	int l = pow(n, 2);
	s[1] = '0';
	s[2] = '1';
	if(n > 1){
		int vt = 2;
		for(int i = 2 ; i <= n ; i++){
			int k = pow(2, i);
			for(int j = 1 ; j <= vt ; j++){
				s[k - j + 1] = '1' + s[j];
				s[j] = '0' + s[j]; 
			}
			vt  = k;
		}
	}
	for(int i = 1 ; i <= l ; i++){
		cout << s[i] << endl;
	}
	return 0;
}
