#include<bits/stdc++.h>
using namespace std;

bool check(long a, long b)
{
    long long sum = 0;
    for(int i = 1 ; i <= sqrt(a) ; ++i){
        if(a%i == 0){
            if(i != a/i){
                (sum += i) += a/i;
            }else sum += i;
        }
    }
    sum -= a;
    return sum == b;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long a, b; cin >> a >> b;
	(check(a, b) && check(b, a)) ? cout << "YES" : cout << "NO";
	return 0;
}
