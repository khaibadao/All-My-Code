// do dai (so ki tu) la mot so nguyen trong pham vi tu 0 ---> 5 neu mat khau co do dai 
// la m thi do an toan se la : min(5, max(m - 5, 0))
// Loai ky tu(hoa, thuong, so)
//neu chi co mot loai ki tu : 1
//co dung 2 loai ki tu : 2
// co du 3 loai ki tu : 5
// y tuong : co ba bien luu so lan xuat hien cua cua tung ki tu
// hoa == in == thuong == 1
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int gia_tri = 0, m = s.size();
//		if(m < 5){
//			gia_tri = m;
//		}else
//		{
//    		gia_tri = min(5, max(abs(m - 5), 0));
//		}
		int cnt = 0;
		gia_tri = min(5, max(abs(m - 5), 0));
		int so = 1, hoa = 1 , thuong =  1;
		for(char x : s){
			if('A' <= x && x <= 'Z')
			   hoa++;
			if('a' <= x && x <= 'z')
				thuong++;
			if('0' <= x && x <= '9')
			    so++;
		}
//		cout << so << ' ' << hoa << " " << thuong << endl;
		if((so > 1 && hoa == 1 && thuong > 1) || (so > 1 && hoa > 1 && thuong == 1) || (so == 1 && hoa > 1 && thuong > 1))
		   cnt = 2;
//		   cout << cnt << endl; 
		if(so > 1 && hoa > 1 && thuong > 1)
           cnt = 5;
//		       cout << cnt << endl;
		if((so > 1 && hoa == 1 && thuong == 1) || (so == 1 && hoa > 1 && thuong == 1) || (so == 1 && hoa == 1 && thuong > 1))
	       cnt = 1;
//		       cout << cnt << endl;
		cout << cnt + gia_tri << " ";
	}
	return 0;
}
