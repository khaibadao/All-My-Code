#include <bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int check(string a, string b) {
    if (Siz(a) > Siz(b)) return 1;
    if (Siz(a) < Siz(b)) return 0;
    for (int i = 0; i < Siz(a); ++i) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
    }
    return 2; // N?u c? hai chu?i b?ng nhau
}

void Sort(vector <string>& a){
	for(int i = 0 ; i < Siz(a) - 1 ; ++i){
		int min_pos = i;
		for(int j = i + 1 ; j < Siz(a) ; ++j){
			int res = check(a[min_pos], a[j]);
			if(res == 1){
				min_pos = j;
			}
		}
    	swap(a[i], a[min_pos]);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    vector <string> a(n);
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    Sort(a);
    for(string x : a) cout << x << ' ';
    return 0;
}
