#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("TACHSO.INP", "r", stdin);
	freopen("TACHSO.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    vector <long long> so;
    string xau = "";
    for(int i = 0 ; i < Siz(s) ; ++i){
    	if('0' <= s[i] && s[i] <= '9') xau += s[i];
    	else
    	{
    		if(Siz(xau)){
    			long long count = stoll(xau);
    			so.push_back(count);
    			xau = "";
			}
		}
	}
	if(Siz(xau)){
   		long long count = stoll(xau);
    	so.push_back(count);
	}
	for(auto it : so) cout << it << ' ';
	sort(so.begin(), so.end());
	cout << '\n';
	for(auto it : so) cout << it << ' ';
    return 0;
}

