#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("BAI2.INP", "r", stdin);
	freopen("BAI2.OUT", "w", stdout);
	string a, b;
	getline(cin, a);
	getline(cin, b);
	vector <string> xauA(0);
	vector <string> xauB(0);
	string var = ""; int check = 0;
	var += a[0];
	for(int i = 1 ; i < a.size() ; ++i){
		if(a[i] != a[i - 1] && a[i] != ' '){
			var += a[i];
			check = 0;
		}
		else if(a[i] == a[i - 1] && check == 1){
			var += a[i];
			check = 0;
		}else if(a[i] == ' '){
			xauA.push_back(var);
			var = "";
			check = 1;
		}
	}
	xauA.push_back(var);
//	neuas nhuw toii coss thew quays laiw voii eme
//	cout << '1' << '\n';
	var = "";
	var += b[0];
	check = 0;
	for(int i = 1 ; i < b.size() ; ++i){
		if(b[i] != b[i - 1] && b[i] != ' '){
			var += b[i];
			check = 0;
		}
		else if(b[i] == b[i - 1] && check == 1){
			var += b[i];
			check = 0;
		}else if(b[i] == ' '){
			xauB.push_back(var);
			var = "";
			check = 1;
		}
	}
	xauB.push_back(var);
	int cnt = 0;
//	for(int i = 0 ; i < xauA.size() ; ++i){
//		cout << xauA[i] << ' ';
//	}
//	cout << '\n';
//	for(int i = 0 ; i < xauB.size() ; ++i){
//		cout << xauB[i] << ' ';
//	}
//	cout << '\n';
	for(int i = 0 ; i < xauB.size() ; ++i){
		if(xauB[i] == xauA[i]) ++cnt;
	}
	cout << cnt;
	return 0;
}
