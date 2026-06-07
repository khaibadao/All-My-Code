#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

bool tmpp(unsigned long long n){ // kiem tra luy thua co so 2
	while((n&1)^1) n /= 2;
	return n == 1;
}

void xu_ly(unsigned long long &n, bool &check){
	if(check == true) // la luy thua co so 2
	{
		n /= 2;
		check = tmpp(n);
	}
	else
	{
		unsigned long long res = 1;
		for(int i = 1 ; i <= 64 ; ++i){
			if(res*2 < n){
				res *= 2;
			}else break;
		}
		n -= res;
		check = tmpp(n);
	}
}
void doo(unsigned long long n, int tmp){
	bool check = true;
	int cnt = 1;
	while(n != 1){
		if(cnt){
//			cout << cnt << ' ';
			--cnt;
			xu_ly(n, check);
//			cout << n << ' ' << check << en;
		}else{
//			cout << cnt << ' ';
			++cnt;
			xu_ly(n, check);
//			cout << n << ' ' << check << en;
		}
	}
//	cout << cnt << ' ' << n << ' ' << check << en;
	(!cnt) ? cout << "Case #" << tmp << ": " << "yes" << en : cout << "Case #" << tmp << ": " << "no" << en;
}

int main(){
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	 
    int t; cin >> t;
    int tmp = 1;
    while(t--){
    	unsigned long long n; cin >> n;
    	doo(n, tmp);
    	++tmp;
	}
	
    return 0;
}

