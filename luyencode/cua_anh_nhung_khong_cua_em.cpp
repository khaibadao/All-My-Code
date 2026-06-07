#include<bits/stdc++.h>
using namespace std;
map <long long, int> mp;
void tach(long a){
	for(int i = 1 ; i <= sqrt(a); ++i){
		if(a%i == 0){
			if(i != a/i){
				++mp[i];
				++mp[a/i];
			}else ++mp[i];
		}
	}
}

void tach_a(long a){
	long long sum = 0;
	for(int i = 1 ; i <= sqrt(a); ++i){
		if(a%i == 0){
			if(i != a/i){
				++mp[i];
				if(mp[i] == 1) sum += i;
				++mp[a/i];
				if(mp[a/i] == 1) sum += a/i;
			}else{
				++mp[i];
				if(mp[i] == 1) sum += i;
			}
		}
	}
	cout << sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b; cin >> a >> b;
	tach(b);
	tach_a(a);
	return 0;
}
