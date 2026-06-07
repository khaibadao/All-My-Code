#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int ht, n; cin >> ht >> n;
	unordered_map <int, bool> maa;
	unordered_map <int, bool> vst;
	maa[ht] = true;
	vst[ht] = true;// danh dau la lop vo dich
	while(n--){
		int a, b; cin >> a >> b;
		if(maa[b]){
			maa[a] = true;
			vst[a] = true;
			ht = a;
			maa[b] = false;
		}
	}
	cout << ht << ' ' << Siz(vst);
	return 0;
}

