#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int check(string s, int k){
	int res = 0;
	for(char x : s){
		res = (res * 10 + (x - '0')) % k;
	}
	return res == 0;
}

int main()
{
	freopen("luckynum.inp", "r", stdin);
	freopen("luckynum.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k; cin >> k;
	if(k%5 == 0){
		cout << -1;
		return 0;
	}else if(8%k == 0 && 6%k == 0){
		cout << 6;
		return 0;
	}else if(8%k == 0 && 6%k != 0){
		cout << 8;
		return 0;
	}
	queue <string> qe;
	qe.push("8"), qe.push("6"); 
	while(!qe.empty()){
		string s = qe.front();;
		qe.pop();
		if(Siz(s) > 200){
			cout << -1;
			return 0;
		}
		if(check(s, k)){
			cout << s;
			return 0;
		}
		qe.push('8' + s);
		qe.push(s + '6');
	}
	cout << -1;
	return 0;
}
