#include<bits/stdc++.h>
using namespace std;

int prime[1000001];
void sang(){
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
} 

int reverse_number(int n) {
    int ans = 0;
    while (n != 0) {
        int tmp = n % 10;
        ans = ans * 10 + tmp;
        n /= 10;
    }
    return ans;
}

int tong(int a){
	string s = to_string(a);
	long long sum = 0;
	for(char x : s) sum += x - '0';
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int n, H; cin >> n >> H;
	int ans = 0;
	for(int i = 10 ; i <= n ; ++i){
		if(prime[i]){
			int res = reverse_number(i);
			if(prime[res]){
				int count = tong(res);
				if(count == H){
					cout << i << '\n' << res << '\n';
					ans += 2;
					prime[i] = prime[res] = 0;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
