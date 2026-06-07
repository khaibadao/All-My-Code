#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s; cin >> s;
    s = '#' + s;
    string ab = "", ba = "";
    int i = 0, j = 1;
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    int size = s.size();
	// vetcan :)
	for(int i = size ; i >= 2; i--){
		if(s[i] == 'B' && s[i - 1] == 'A'){
			ab += 'A'; ab += 'B';
			x1 = i - 1, x2 = i;
			break;
		}else if(s[i - 1] == 'B' && s[i] == 'A'){
			ba += 'B'; ba += 'A';
			y1 = i - 1; y2 = i;
			break;
		}
	}
	if((x1 == x2 && x2 == 0) && (y1 == y2 && y2 == 0)){
//		cout << ab << ' ' << ba << '\n';
		cout << "NO";
		return 0;
	}else if(x1 > 0 && x2 > 0){
		for(int i = 1 ; i <= size ; ++i){
			if(s[i] == 'B' && s[1 + i] == 'A'){
				ba += s[i];
				ba += s[i + 1];
				y1 = i;
				y2 = i + 1;
				break;
			}
		}
//		cout << ab << ' ' << ba << '\n';
		if(ab.size() && ba.size() && x1 != y2 && x2 != y1) cout << "YES";
		else cout << "NO";
//	ABBBDABA
	}else
	{
		// th y2 > 0 && y1 > 0
		for(int i = 1 ; i <= size ; ++i){
			if(s[i] == 'A' && s[i + 1] == 'B'){
				ab += s[i]; ab += s[i + 1];
				x1 = i;
				x2 = i + 1;
				break;
			}
		}
		if(ab.size() && ba.size() && x1 != y2 && x2 != y1) cout << "YES";
		else cout << "NO";
	}
    return 0;
} 
