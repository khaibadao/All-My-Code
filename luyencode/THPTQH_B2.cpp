#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(long i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}

int main() {
	freopen("ntmax.inp", "r", stdin);
	freopen("ntmax.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    vector <int> so;
    string soo = "";
    int sl = 0;
    for(int i = 0 ; i < Siz(s) ; ++i){
    	if('0' <= s[i] && s[i] <= '9'){
    		soo += s[i];
    		++sl;
		}
    	else
    	{
    		if(Siz(soo)){
    			int res = stoi(soo);
    			so.push_back(res);
    			soo = "";
			}
			soo = "";
		}
	}
	if(Siz(soo)){
		int res = stoi(soo);
    	so.push_back(res);
	}
	if(!Siz(so)){
		cout << 0 << '\n' << 0;
		return 0;
	}else
	{
		int ans = 0;
		cout << sl << '\n';
		for(const auto &it : so){
//			cout << it << ' ';
			if(check(it)){
				ans = max(ans, it);
			}
		}
		cout << ans;
	}
    return 0;
}

