#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
//	freopen("demuoc.inp", "r", stdin);
//	freopen("demuoc.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n; cin >> n;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    string s; cin >> s;
	vector <int> chiso(n, 0);
    for(int i = 0 ; i < n ; ++i){
    	if(s[i] == 'W'){
    		if(i == 0) chiso[i] = 0;
			else
			{
				long res = a[i];
				for(int j = i - 1 ; j >= 0 ; --j){
					if(res <=){
						count = a[j];
						++chiso[i];
					}else break;
				}
			}	
		}else
		{
			if(i == n - 1){
				chiso[i] = 0;
				break;
			}else
			{
				cout << a[i] << ':' << ' ';
				long count = 0;
				for(int j = i + 1 ; j < n ; ++j){
					if((a[j] >= count) && (a[j] <= a[i] || a[j] >= a[i])){
						cout << a[j] << ' ';
						++chiso[i];
						count = a[j];
					}else break;
				}
			}
		}
		cout << '\n';
	}
	for(int i = 0 ; i < n ; ++i) cout << chiso[i] << ' ';
    return 0;
}
