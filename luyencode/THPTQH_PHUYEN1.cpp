#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int n;

bool check(int n){
    if(n < 2) return false;
    if(n < 4) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5 ; i*i <= n ; i += 6){
        if(n%i == 0 || n%(i + 2) == 0) return false;
    }
    return true;
}

vector <int> a = {2, 3, 5, 7};
vector <int> v = {1, 3, 7, 9};

void ql(string s, int pos){
	if(pos == n - 1){
		cout << s << '\n';
		return;
	}
	for(int i : v){
		string pr = s + to_string(i);
		if(check(stoll(pr))){
			ql(pr, pos + 1);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	if(n == 1) cout << 2 << '\n' <<  3 << '\n' <<  5 << '\n' <<  7;
	else
	{
		for(int i : a){
			ql(to_string(i), 0);
		}
	}
	return 0;
}
