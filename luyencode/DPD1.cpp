#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001

/*





                                                         ██████████████
                                                    ████████████████████████
                                                ███████████████████████████████
                                              ████████████████████████████████████
                                            █████████████   ███████████████████████
                                          ████████████       ████████████████████████
                                         ██████████          █████████████████████████
                                        █████████            ██████████████████████████
                                       ████████               █████████████████████████
                                      ███████                 ██████████████████████████
                                     ███████                  █████████████████████████████
                                    ██████                    ███ ████████████████████████
                                    █████    ██                █  ████████████████████████████████
                                   █████     ██                █  █████████████████████████████
                                  ██████     ██              ██   ███████████████████████████
                                  ██████     █               ██  █████████████████████████
                                  ██████    ██              ███  ██████████████████████████████
                                 █████      ██              ██   ██████████████████████████
                                 ████       █              ███  █████████ ██████████████
  █████                          ███                       ██   ████████    ██████████
  ███████                       ███   █                        ████████  █ █ ██████
   ████████                     ██  ████        █████          ███████  █   ██████
   ███████████                  █  ███████      █             ███████      █████
    ████████████   ███            ████████████    ██         ███████    ████
      ██████████████████             ███████████████    ███████████████████
        █████████   ██████             ███████       ██████████████████████
          ██████   █████████████        ██████████      ██████████████████
           ████    █████████████████  ██████████████ █████████████████████
                   ███████████████████████████████████████████████████████
                  ███████████████████████████████████████████████
                 ████████████████████████████████████████
                 ████████████████████████████████████████
                 ██████ ████████████████████████████████
                  ████     ████████████████████████████
                  ████████   █████████████████████████
                   ███████████ ███████████████████████
                    ██████████████████████████████████
                    ███████████████████████████    ████
                    ██████████ ██████████████████    ███
                   ██████████     ██████████████   █████
                   ████████          ██████████████████
                  ████████                ███████████
                 ███████                       ████
                  ███
*/

using namespace std;

typedef unordered_map<long long, long long> unmap;


void kq(long long a, long long b, int k, int th){
	long long res = 0;
	long long mod = 998244353;
	if(th == 1){
		// sl_a < k && k < sl_b; --> Tạo điểm đầu và điểm cuối của k số 1 500 2
		string beg = "1", ed = "9";
		for(int i = 0 ; i < k - 1 ; ++i){
			beg += '0';
			ed += '9';
		}
		long long s1 = stoll(beg), s2 = stoll(ed);
		long long tmp1 = (s1%mod + s2%mod)%mod, tmp2 = ((s2 - s1 + 1) % mod + mod) % mod;;
		long long inv2 = 499122177; // nghịch đảo của 2 với mod 998244353
		res = ((tmp1 * tmp2) % mod * inv2) % mod;
		// cout << th << ' ' << s1 << ' ' << s2 << en;
		cout << res;
	}
	if(th == 2){
		// sl_a < k && sl_b == k --> Tạo điểm đầu của k số và tính tổng từ k đến b 2 500 3
		string beg = "1", ed = "9";
		for(int i = 0 ; i < k - 1 ; ++i){
			beg += '0';
			ed += '9';
		}
		long long s1 = stoll(beg), s2 = b;
		long long tmp1 = (s1%mod + s2%mod)%mod, tmp2 = ((s2 - s1 + 1) % mod + mod) % mod;;
		long long inv2 = 499122177; // nghịch đảo của 2 với mod 998244353
		res = ((tmp1 * tmp2) % mod * inv2) % mod;		// cout << th << ' ' << s1 << ' ' << s2 << en;
		cout << res;
	}
	if(th == 3){
		// sl_ a == k && sl_b == k --> Tổng từ a -> b 10 50 2
		// string beg = "1", ed = "9";
		// for(int i = 0 ; i < k - 1 ; ++i){
		// 	beg += '0';
		// 	ed += '9'
		// }
		// long long s1 = stoll(beg), s2 = stoll(ed);
		// res = ((((s1 + b)) * (b - s1 + 1))%mod)/2;
		// res %= mod;
		// cout << res;
		long long s1 = a, s2 = b;
		long long tmp1 = (s1%mod + s2%mod)%mod, tmp2 = ((s2 - s1 + 1) % mod + mod) % mod;;
		long long inv2 = 499122177; // nghịch đảo của 2 với mod 998244353
		res = ((tmp1 * tmp2) % mod * inv2) % mod;
		// cout << th << ' ' << s1 << ' ' << s2 << en;
		cout << res;
	}
	if(th == 4){
		// sl_a ==  k && sl_b > k; --> Tạo điểm cuối của k số với vị trí bắt đầu tính tổng là a 50 100 2
		string beg = "1", ed = "9";
		for(int i = 0 ; i < k - 1 ; ++i){
			beg += '0';
			ed += '9';
		}
		long long s1 = a, s2 = stoll(ed);
		long long tmp1 = (s1%mod + s2%mod)%mod, tmp2 = ((s2 - s1 + 1) % mod + mod) % mod;;
		long long inv2 = 499122177; // nghịch đảo của 2 với mod 998244353
		res = ((tmp1 * tmp2) % mod * inv2) % mod;
		// cout << th << ' ' << s1 << ' ' << s2 << en;
		cout << res;
	}
}


int all_case(long long a, long long b, int k){
	string a_f = to_string(a);
	string b_f = to_string(b);
	if(Siz(a_f) < k && k < Siz(b_f)) return 1;
	if(Siz(a_f) < k && k == Siz(b_f)) return 2;
	if(Siz(a_f) == k && k == Siz(b_f)) return 3;
	if(Siz(a_f) == k && k < Siz(b_f)) return 4;
	
}

int main() {
    //freopen("", "r", stdin); 
    //freopen("", "w", stdout);
    ios_base::sync_with_stdio(false);
  	cin.tie(NULL); cout.tie(NULL);
  	long long a, b; cin >> a >> b;
  	int k; cin >> k;
  	// các trường hợp có thể xảy ra: 
  	int doo = all_case(a, b, k);
  	kq(a, b, k, doo);
	return 0;
}
