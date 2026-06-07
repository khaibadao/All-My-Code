#include<bits/stdc++.h>
#define Siz(n) n.size()
using namespace std;
//long long Chap(int k, int n){
//	if(n == k || k == 0) return 1;
//	return Chap(k - 1, n) + Chap(k - 1, n - 1);
//}


int main()
{
//	freopen("DEMTU.INP", "r", stdin);
//	freopen("DEMTU.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	string xau = "";
	int ans = 0;
	for(char x : s){
		if(x != ' ') xau += x;
		else
		{
			if(Siz(xau)){
				++ans;
				xau = "";
			}
		}
	}
	if(Siz(xau)) ++ans;
	cout << ans << '\n';
	return 0;
}
