#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

string tmp = "";
// mot xau tmp : ki tu cuoi len dau va xoa ki tu cuoi di
void doo(string s, long long k){
	long long l = Siz(s);
    while(k > l){
        long long x = l;
        while(x * 2 < k){
            x *= 2;
        }
        k = k - x - 1;
        if(k == 0){
            k = x;
        }
    }
    cout << s[k - 1];
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long k; cin >> k;
	string s; cin >> s;
	doo(s, k);
	return 0;
}

