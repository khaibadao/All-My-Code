#include<bits/stdc++.h>
#include "do_hoa.h"
using namespace std;
int main()
{
	while(1){
		int x = 0, y = 4, xcu = x;;
		int mau = 1;
		string t = "Chuc Mung Ngay Valentine :333";
		gotoxy(0, 4);
		for(int i = 0 ; i < t.size() ; ++i){
			cout << t[i];
			Sleep(100);
		}
		string ten = "Hay nhap ten cua ban : ";
		int i_1 = 0;
		for(int i = 0 ; i < 90; ++i){
			if(mau > 15) mau = 1;
			SetColor(mau);
			++mau;
			if(x < 25 || x > 47){
				if(x >= 47){
					gotoxy(70, 4); cout << "                        ";
				}
				gotoxy(xcu, y); cout << ' ';
				gotoxy(x, y); cout << t;
//				Sleep(100);
				xcu = x;
			}
			else if(x >= 25 || x <= 47)
			{
//				Sleep(100);
                gotoxy(x, y); cout << t;
				gotoxy(x, y);
				SetColor(7);
				cout << ten[i_1];
				++i_1;
			}
			Sleep(100);
			if(x >= 47){
				gotoxy(70, 4); cout << " ";
			}
			++x;
		}
	}
	// trai tim : 3
	
	return 0;
}
