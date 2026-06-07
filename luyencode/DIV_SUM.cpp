#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(string s)
{
    long long so = stoll(s);
    int sum = 0;
    for(char x : s) sum += x - '0';
    return so%sum == 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int res = 10;
	long long n; cin >> n ;
	if(n <= 10){
        return cout << n, 0;
	}
	for(long i = 12 ; i <= n ; i += 2){
        if(check(to_string(i))) ++res;
	}
	cout << res;
	return 0;
}
