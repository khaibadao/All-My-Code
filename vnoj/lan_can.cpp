#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n; cin >> n;
	long long cnt = 1;;
	int dem = 0;
	int gia_tri = n.size();
	while(gia_tri > 1){
		for(int i = 0 ; i < n.size() ; ++i){
			cnt *= n[i] - '0';
		}
		++dem;
		n = to_string(cnt);
		gia_tri = n.size();
		cnt = 1;
	}
	int tmp = stoi(n) + dem;
	cout << tmp;
    return 0;
}
