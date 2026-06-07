#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	long long sum = 0;
	// Mai Ngoc 
	sum += x1 * 2;
	// VanHocvp
	sum += 0;
	//TuDeepTry
	sum += (x3 + 1);
	//TaiLe : + hop tac se hop tac
//	          + lua qua 2 lan se tra dua lan tiep theo
    sum += x4 + (x4/2);
	cout << sum + 1;
	return 0;
}

