#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

vector <int> ngto;
void sang(){
	for(int i = 2 ; i <= 1000 ; ++i){
		if(check(i)) ngto.push_back(i);
	}
}
int main() {
	freopen("GIAITHUA.INP", "r", stdin);
	freopen("GIAITHUA.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    int n; cin >> n;
    
    for (int so : ngto) {
        if (so > n) break;
        int count = 0;
        for (int i = so; i <= n; i *= so) {
            count += n / i;
        }
        cout << count << ' ';
    }
    return 0;
}

