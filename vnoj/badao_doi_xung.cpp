#include<bits/stdc++.h>
using namespace std;
int doi_xung(string a){
	int l = 0, r = a.size() - 1;
	while(l < r){
		if(a[l] != a[r]) return false;
		++l, r--;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int a = s.size();
		if(a == 1)
		{
			cout << -1 << '\n';
		}else
		{
			a -= 2;
			int check = 0;
//			char x1 = s[0], x2 = s[1], x3 = s[2];
//			if(x1 == x3 || x1 == x2 || x2 == x3) cout << 0 << '\n';
            if(doi_xung(s)){
            	cout << 0 << '\n';
            	check = 1;
			}
            else
			{
				for(int i = 0 ; i < a ; ++i){
	            	char x1 = s[i], x2 = s[i + 1], x3 = s[i + 2];
			    	if(x1 == x3 || x1 == x2 || x2 == x3){
			    		cout << 0 << '\n';
			    		check = 1;
			    		break;
					}
				}
			}
			if(!check) cout << 1 << '\n';
		}
	}
	return 0;
}
