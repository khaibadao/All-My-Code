#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000000+7
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	long long sum = 0;
	int res = 3;
    s1 %= Mod;
	s2 %= Mod;
	s3 %= Mod;
	sum += (s1 %= Mod) + (s2 %= Mod) + (s3 %= Mod);
	while(res--){
        sum += (s1 %= Mod) + (s2 %= Mod) + (s3 %= Mod);
	}
	cout << sum;
	return 0;
}

