#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int main()
{
//	freopen("bai2.inp", "r", stdin);
//	freopen("bai2.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin >> s;
	vector <long long> so;
	vector <string> xau;
	string sh = "", cc = "";
	for(int i = 0 ; i < Siz(s) ; ++i){
		if('a' <= s[i] && s[i] <= 'z'){
			cc += s[i];
			if(Siz(sh)){
				long long res = stoll(sh);
				so.push_back(res);
				sh = "";
			}
		}else if('0' <= s[i] && s[i] <= '9'){
			sh += s[i];
			if(Siz(cc)){
				xau.push_back(cc);
				cc = "";
			}
		}
	}	
	if(Siz(cc)) xau.push_back(cc);
	if(Siz(sh)){
		long long res = stoll(sh);
    	so.push_back(res);
	}
	sort(so.begin(), so.end());
//	for(int i = 0 ; i < Siz(so) ; ++i) cout << so[i] << ' ';
//	cout << '\n';
//	for(int i = 0 ; i < Siz(xau) ; ++i) cout << xau[i] << ' ';
//	cout << '\n';
	for(int i = 0 ; i < Siz(xau) ; ++i){
		cout << xau[i] << so[i];
	} 
}
