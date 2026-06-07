#include<bits/stdc++.h>
using namespace std;
int main()
{
	int truy_van; cin >> truy_van;
	while(truy_van--){
		//nhap do so luong test case
		//moi test case co 2 so a, b
		//cu moi  lan nhu the kiem tra cap so a, b co lon hon 10 hay ko thi se break
		// nguoc lai thi tao ra thang max = 0 va kt neu thang a <= 10 va max < b thi max = b
		// ok trien thoi
		int n; cin >> n;
		int cnt = 0;
		int max1 = 0;
		int gia_tri = 0;
		while(n--){
			int a, b; cin >> a >> b;
			if(a > 10){
			   max1 = 0;
			   cnt++;
    		}
			else
			{
				if(a <= 10 && gia_tri < b){
					max1 = cnt;
					gia_tri = b;
					cnt++;
				} 
			}
		}
		cout << gia_tri << endl;
		cout << cnt << endl;
	}
	return 0;
}
