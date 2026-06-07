#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	string s = "";
	s += " ";
	while(n--){
		char x; cin >> x;
		s += x;
	}
	while(q--){
		int l, r; char c;
		cin >> l >> r >> c;
		int dem = 0;
		for(int i = l; i <= r ; i++){
			if(s[i] == c){
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
