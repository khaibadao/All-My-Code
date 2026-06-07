#include<bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;
int main()
{
    freopen("SONTTQ.INP", "r", stdin);
	freopen("SONTTQ.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	int k; cin >> k;
	vector <char> a;
	unordered_map <char, int> maa;
	for(char x : s){
        if(!maa[x]){
           ++maa[x];
           a.push_back(x);
        }
	}
	if(k > Siz(a)) return cout << -1, 0;
	sort(a.begin(), a.end());
	cout << a[k - 1] << ' ';
	(a[k - 1] == '2' || a[k - 1] == '3' || a[k - 1] == '5' || a[k - 1] == '7') ? cout << "Yes" : cout << "No";
	return 0;
}
