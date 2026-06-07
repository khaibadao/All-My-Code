#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 123456789
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

//void doo(long long n){
//	int cnt = 0;
//	for(int i = 1 ; i <= sqrt(n) ; ++i){
//		if(n%i == 0){
//			(i != n/i) ? cnt += 2 : ++cnt;
//		}
//	}
//	cout << cnt;
//}

//bool prime[1000001];
//void sang()
//{
//	for(int i = 0 ; i <= 1000000; ++i) prime[i] = true;
//	prime[0] = prime[1] = false;
//	for(int i = 2 ; i <= 1000 ; ++i){
//		if(prime[i]){
//			for(int j = i*i ; j <= 1000000 ; j += i){
//				prime[j] = false;
//			}
//		}
//	}
//	for(int i = 2 ; i <= 1000000 ; ++i){
//		if(prime[i]) a.push_back(i);
//	}
//}

unordered_map <long long, int> maa;
void tach(long long n){
	for(long long i = 2 ; i <= sqrt(n) ; ++i){
		while(n%i == 0){
			++maa[i];
			n /= i;
		}
	}
	if(n != 1) ++maa[n];
}

int main() {
	freopen("DIVISOR.INP", "r", stdin);
	freopen("DIVISOR.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector <long> a(n);
	long long sum = 1;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		tach(a[i]);
	}
	long long res = 1;
	for(const auto &it : maa){
		long mu = it.second;
		res = (res*(mu + 1))%Mod7;
	}
	cout << res;
	return 0;
}

