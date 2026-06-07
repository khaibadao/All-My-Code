#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}

int n;
int v[4] = {2, 3, 5, 7};
int a[4] = {1, 3, 7, 9};
vector <int> so;
string res = "";
void ql(string s, int len){
	if(len > Siz(res)) return;
	if(stoll(s) <= n){
		so.push_back(stoll(s));
//		cout << s << ' ';
	}
	for(int i : a){
		string pr = s + to_string(i);
		if(check(stoll(pr))){
			ql(pr, len + 1);
		}
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n; 
    res = to_string(n);
    if(n < 2){
    	cout << 0;
    	return 0;
	}
    for(int i : v){
    	ql(to_string(i), 0);
	}
	sort(so.begin(), so.end());
	for(int i : so) cout << i << ' ';
    return 0;
}
