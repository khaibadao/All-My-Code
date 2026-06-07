#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
// giao dien keo bua bao
void SET_COLOR(int color)
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}
// ham khoi tao
// ham nhap
// ham random : cho may sinh ngau nhien 
//
//
// ham xuly
// ham kiem tra
// 
void khoi_tao(){
	SET_COLOR(14);
	cout << "Hay chon mot so : " ;
	cout << "       0 : Bua        1 : Keo        2 : Bao";
	cout << endl << endl;
}
string kiem_tra(int nguoi_chon, int may_chon){
	if(nguoi_chon == may_chon){
		return "draw";
	}
	if(nguoi_chon == 0){
		if(may_chon == 2){
			return "may";
		}else{
			return "nguoi";
		}
	}
   	if(nguoi_chon == 1){
	    if(may_chon == 0){
	    	return "may";
		}else
		{
			return "nguoi";
			}
		}
	if(nguoi_chon == 2){
		if(may_chon == 1){
			return "may";
		}else
		{
			return "nguoi";
		}
	}
}
int Ran(int l, int r){
	return l + rand() % (r - l + 1);
}
int diem_nguoi = 0, diem_may = 0;
string type[3] = {"Bua", "Keo", "Bao"};
int main()
{
	srand(time(NULL));
	SET_COLOR(3);
	cout << "Hom nay ta se choi mot tro keo bua bao :)" << endl << endl;
	SET_COLOR(8);
	cout << "Luat choi rat don gian : + Ban nhap so luot choi" << endl;
	cout << "                         + Nhap ki hieu bat ki ( Keo, Bua, Bao)" << endl;
	cout << "                         + Nguoi may se choi voi ban tuong ung voi so luot choi :))" << endl;
	cout << "                         + Cuoi cung la ket qua :)" << endl;
	SET_COLOR(3);
	cout << "Chuc ban choi vui ve :))" << endl << endl;
	cout << "Ban hay nhap so luot choi tuong ung : ";
	int Luot_choi;
	SET_COLOR(11);
	cin >> Luot_choi; cout << endl;
	while(Luot_choi--){
		khoi_tao();
		int may_chon = Ran(0, 2);
		cout << "---- > ";
		SET_COLOR(11);
		int nguoi_chon; cin >> nguoi_chon;
//		cout << endl;
		while(nguoi_chon > 2 || nguoi_chon < 0){
			SET_COLOR(12);
			cout << "Du lieu khong hop le !!!" << endl;
			cout << "Hay nhap lai :  ";
			SET_COLOR(11);
		    cin >> nguoi_chon;
//		    cout << endl;
		}
		string ket_qua = kiem_tra(nguoi_chon, may_chon);
		SET_COLOR(7);
		cout << "Ban chon : " << type[nguoi_chon] << endl;
		cout << "May chon : " << type[may_chon] << endl;
		if(ket_qua == "draw"){
			cout << "----- > Ca hai hue nhau :)" << endl;
			diem_nguoi++;
			diem_may++;
		}
		if(ket_qua == "may"){
			diem_may++;
			cout << "----- > May +1 point" << endl;
		}
		if(ket_qua == "nguoi"){
			diem_nguoi++;
			cout << "----- > Nguoi +1 point" << endl;
		}
	}
	cout << endl;
	SET_COLOR(14);
	cout << "Diem cua Ban la : " << diem_nguoi << endl;
	cout << "Diem cua May la : " << diem_may;
	cout << endl;
	if(diem_nguoi == diem_may){
		cout << " ---- > Ca hai da hue nhau :)";
	}
	if(diem_nguoi > diem_may){
		cout << " ---- > Ban da chien thang :)";
	}
	if(diem_may > diem_nguoi){
		cout << " ---- > Nguoi may da chien thang :)";
	}
	SET_COLOR(7);
	return 0;
}
