#include<bits/stdc++.h>
#define Siz(s) s.size()
#define en '\n'
#define Mod 1000000007

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	int tp = 0;
	while(t--){
		string a, b; cin >> a >> b;
		int i = 0, j = 0; 
		int cnt = 0;
		while(i < Siz(a) && j < Siz(b)){
			if(a[i] == b[j]){
//				cout << a[i] << ' ' << b[j] << en;
				++i, ++j;
			}else
			{
				while(b[j] != a[i] && j < Siz(b)){
					++j;
					++cnt;
				}
			}
		}
		if((j == Siz(b) && i < Siz(a)) || Siz(b) - j < Siz(a) - i) cout << "Case #" << ++tp << ':' << " IMPOSSIBLE" << en;
		else{
 		//cout << "Case #" << ++tp << ": " <<  cnt << en;
 		    if(i == Siz(a)){
 		   	    cnt += Siz(b) - j;
		    }
			cout << "Case #" << ++tp << ": " <<  cnt << en;   
    	}
    }
	return 0;
}
