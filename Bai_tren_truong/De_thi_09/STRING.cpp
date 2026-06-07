#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

unordered_map <char, int> maa_a;
unordered_map <char, int> maa_b;

bool check(queue <char> qe){
	while(!qe.empty()){
		char x = qe.front();
		if(maa_b[x] == maa_a[x]) qe.pop();
		else return false;
	}
	return true;
}

void xuat(queue <char> qe){
	while(!qe.empty()){
		cout << qe.front();
		qe.pop();
	}
}
void doo(string a, string b){
	for(char x : a){
		++maa_a[x];
	}
	queue <char> qe;
	int res = 0;
	
	for(int i = 0 ; i < Siz(a) ; ++i){
		++maa_b[b[i]];
		qe.push(b[i]);
    }
    if(check(qe)) ++res;
	for(int i = Siz(a) ; i < Siz(b) ; ++i){
		--maa_b[qe.front()];
		qe.pop();
		qe.push(b[i]);
		++maa_b[b[i]];
		if(check(qe)){
			++res;
		}
	}
	cout << res;
}

int main() {
	freopen("STRING.INP", "r", stdin);
	freopen("STRING.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k; cin >> n >> k;
	string a, b; cin >> a >> b;
	doo(a, b);
	return 0;
}

