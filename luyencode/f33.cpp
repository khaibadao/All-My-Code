#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <string> str;
void sang()
{
	char t = '3';
	string xau = "";
	str.push_back(xau + t);
	while(Siz(str) < 18){
		xau += t;
		str.push_back(xau);
	}
}
int main() {
//	freopen("average.inp", "r", stdin);
//	freopen("average.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    sang();
    for(string t : str){
		long long so = stoll(t);
		if(so%n == 0){
			cout << Siz(t);
			return 0;
    	}
	}
	cout << -1;
    return 0;
}

