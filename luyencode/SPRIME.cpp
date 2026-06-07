#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n < 2) return false;
    if(n < 4) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5 ; i*i <= n ; i += 6){
        if(n%i == 0 || n%(i + 2) == 0) return false;
    }
    return true;
}

int n;
vector <int> a = {2, 3, 5, 7};
vector <int> v = {1, 3, 7, 9};

void ql(string s, int len){
	if(len == n){
		cout << s << ' ';
		return;
	}
	for(int i : v){
		string pr = s + to_string(i);
		if(check(stoll(pr))){
			ql(pr, len + 1);
		}
	}
}
int main()
{
	freopen("bai1.inp", "r", stdin);
	freopen("bai1.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	if(n == 1) cout << "2 3 5 7";
	else
	{
		for(int i : a){
			ql(to_string(i), 1);
		}
	}
    return 0;
}

