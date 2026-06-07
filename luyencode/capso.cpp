#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void sang()
{
    for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
    prime[1] = prime[0] = 0;
    for(int i = 2 ; i <= 1000 ; ++i){
        if(prime[i])
        {
            for(int j = i * i ; j <= 1000000 ; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
	freopen("pair.inp", "r", stdin);
	freopen("pair.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int count = 0;
	int n, k; cin >> n >> k;
	for(int i = 2 ; i <= n ; ++i){
		if(prime[i] && i + k < n){
			if(prime[i + k]) ++count;
		}
	}
	cout << count;
	return 0;
}
