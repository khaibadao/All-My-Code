#include<bits/stdc++.h>
#define Mod 1000000007
#define ModF 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

bool check(int n){
	if(n < 1) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 6 ; i <= sqrt(n) ; i += 5){
		if(n%i == 0 || n%(i + 2) == 0) return true;
	}
	return false;
}

unordered_map <int, int> maa;
void tach(int n){
	for(int i = 2 ; i <= 7 ; ++i){
		if(n%i == 0){
			while(n%i == 0){
				++maa[i];
				n /= i;
			}
		}
	}
}
 22233357
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) return false;
		else if(n <= 9) cout << 1 << n << en;
		else 
		{
			string so = "";
			a = '5', b = '7';
			
		}
	}
	return 0;
}
