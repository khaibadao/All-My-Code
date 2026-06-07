#include<bits/stdc++.h> 
#include "do_hoa.h"
using namespace std;

// Mot so bien toan cuc !!!
string so_dau_tien, so_tiep_theo, ket_qua_cu;
int a = 246;
char ki_tu_chia = (int)a;
char dau = ' ', dau_dang_truoc = ' ';
char dau_a = ' ', dau_b = ' ';
int var = 0;
string ANS = "0";
int Kiem_tra_ans_a = 0;
int Kiem_tra_ans_b = 1;
int gia_tri_a = 0, gia_tri_b = 0;

//                                    ham thuat toan 

// ham Dao nguoc
void reverst(int a[], int n){
	int l = 0, r= n - 1;
	while(l < r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l, --r;
	}
}
// tinh tong
void Tong(string a, string b){
	ANS = "";
	string ket_qua = "";
	gotoxy(0 ,0); cout << "                                                   ";
	int n1 = a.size(), n2 = b.size(), n = 0;
	int chi_so_a = 0, chi_so_b = 0;
	int x[n1], y[n1], z[n1 + 1];
	for(int i = 0 ; i < n1 ; ++i){
		if(a[i] == '-' || a[i] == ' ') x[i] = 0;
		else x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		if(b[i] == '-' || b[i] == ' ') y[i] = 0;
		else y[i] = b[i] - '0';
	}
	reverst(x, n1), reverst(y, n2);
	for(int i = n2; i < n1; ++i){
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0; i < n1 ; ++i){
		int tmp = x[i] + y[i] + nho;
		z[n++] = abs(tmp % 10);
		nho = tmp / 10;
	}
	if(nho) z[n++] = nho;
	SetColor(11);
	int check = 0;
	ket_qua += dau_dang_truoc;
	gotoxy(3, 8); SetColor(10); cout << "Ans : ";
	gotoxy(9, 8); SetColor(15); cout << dau_dang_truoc;
	SetColor(14);
	for(int i = n - 1; i >= 0 ; i--){
		if(z[i] == 0 && check == 0){
			continue;
		} 
		else{
			cout << z[i];
			ket_qua += z[i] + '0';
			++check;
		}
	}
	if(check == 0){
		cout << 0;
		ket_qua = "0";
	}
	ANS = ket_qua;
}

//tinh Hieu
void Hieu(string a, string b){
	gotoxy(0 ,0); cout << "                                                   ";
	ANS = "";
	string ket_qua = "";
	int n1 = a.size(), n2 = b.size(), n = 0;
	int x[n1], y[n1], z[n1 + 1];
	for(int i = 0 ; i < n1 ; ++i){
		if(a[i] == '-' || a[i] == ' ') x[i] = 0;
		else x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		if(b[i] == '-' || b[i] == ' ') y[i] = 0;
		else y[i] = b[i] - '0';
	}
	reverst(x, n1), reverst(y, n2);
	for(int i = n2; i < n1; ++i){
		y[i] = 0;
	}
	int khong = 0;
	int nho = 0;
	for(int i = 0 ; i < n1 ; ++i){
		if(x[i] < (y[i] + nho)){
			int tmp = 10 - (y[i] + nho) + x[i];
			z[n++] = abs(tmp%10);
			nho = 1;
		}else 
		{
			int tmp = x[i] - (y[i] + nho);
			z[n++] = abs(tmp%10);
			if(tmp%10 == 0) khong++;
			nho = 0;
		}
	}
	gotoxy(3, 8); SetColor(10); cout << "Ans :  "; SetColor(14);
	if(khong == n1){
		cout << '0';
		ket_qua = "0";
	} 
	else{
		ket_qua += dau_dang_truoc;
		gotoxy(9, 8); SetColor(15); cout << dau_dang_truoc;
		SetColor(14);
		int check = 0;
		for(int i = n - 1; i >= 0 ; i--){
			if(z[i] == 0 && check == 0) continue;
			else{
				cout << z[i];
				ket_qua += z[i] + '0';
				++check;
			}
		}
	}
	ANS = ket_qua;
}

// tinh Nhan 
void Nhan(string a, string b)
{
	gotoxy(0 ,0); cout << "                                                   ";
	string ket_qua = ""; 
	int n1 = a.size(), n2 = b.size();
	int x[n1], y[n2], z[n1 + n2 + 1] = {0}, n = 0; 
	int mang[n2][n1 + n2] = {0}; 
	memset(mang, 0, sizeof(mang));
	for(int i = 0 ; i < n1 ; ++i){
		if(a[i] == '-' || a[i] == ' ') x[i] = 0;
		else x[i] = a[i] - '0';
	}
	for(int i = 0 ; i < n2 ; ++i){
		if(b[i] == '-' || b[i] == ' ') y[i] = 0;
		else y[i] = b[i] - '0';
	}
	int hang = 0, cot = 0;
	int nho_1 = 0, so_1 = 0;
	int check = n1 + n2 - 1;
	for(int j = n2 - 1; j >= 0 ; j--){
		nho_1 = 0;
		cot = check; 
		for(int i = n1 - 1; i >= 0 ; i--){
			so_1 = y[j] * x[i] + nho_1;
		    nho_1 = so_1/10;          
		    mang[hang][cot--] = so_1%10;
		}
		if(nho_1) mang[hang][cot--] = nho_1;
		++hang;
		check--;
	}
	int nho = 0;
	for(int i = n2 + n1 - 1; i >= 0 ; i--){
    	int so = 0;
		for(int j = n2 - 1 ; j >= 0 ; j--){
			so += mang[j][i];
		}
		so += nho;
		nho = so/10;
		z[n++] = so%10;
	}
	if(nho) z[n++] = nho;
	int check1 = 0;
	SetColor(11);
	gotoxy(3, 8); SetColor(10); cout << "Ans : ";
	gotoxy(9, 8); SetColor(15); cout << dau_dang_truoc;
	SetColor(14);
	ket_qua += dau_dang_truoc;
	for(int i = n - 1; i >= 0 ; i--){
		if(z[i] == 0 && check1 == 0) continue;
		else{
			cout << z[i];
			ket_qua += z[i] + '0';
			++check1;
		}
	}
	SetColor(14);
	if(check1 == 0){
		cout << 0;
		ket_qua = "0";
	}
	ANS = ket_qua;
}

// tinh Chia
void Chia(string a, string b){
	gotoxy(0 ,0); cout << "                                                   ";
	long long so_1 = stoll(a);
	long long so_2 = stoll(b);
	gotoxy(3, 8); SetColor(10); cout << "Ans : "; SetColor(14);
	if(so_2 == 0){
		gotoxy(3, 8);
		SetColor(4); cout << "  Math error !!!!";
	}else cout << fixed << setprecision(19) << (double)so_1 / (double)so_2;
}

//                              Mot so ham kiem tra xau !!!

// ham kiem tra a > b || a < b || a == b
void check(string a, string b){
	// xau nao co size lon hon va check xem xau lon hon do la xau a hay xau
	// khi do bai toan se duoc lam ro
	// mong la code ra
	int xau_a = 0, xau_b = 0;
    if(a.size() >= b.size()) ++xau_a;
    else ++xau_b;
    int n1, n2;
    if(xau_a){
        n1 = a.size() , n2 = b.size();
	}else{
		n1 = b.size(), n2 = a.size();
	}
    int x[n1], y[n1];
    if(xau_a){
    	for(int i = 0 ; i < n1 ; ++i){
	        if(a[i] == '-' || a[i] == ' ') x[i] = 0;
	        else x[i] = a[i] - '0';
		}
		for(int i = 0 ; i < n2 ; ++i){
			if(b[i] == '-' || b[i] == ' ') y[i] = 0;
			else y[i] = b[i] - '0';
		}
	}
    else
    {
    	for(int i = 0 ; i < n1 ; ++i){
	        if(b[i] == '-' || b[i] == ' ') x[i] = 0;
	        else x[i] = b[i] - '0';
		}
		for(int i = 0 ; i < n2 ; ++i){
			if(a[i] == '-' || a[i] == ' ') y[i] = 0;
			else y[i] = a[i] - '0';
		}
	}
	reverst(x, n1), reverst(y, n2);
	for(int i = n2 ; i < n1 ; ++i) y[i] = 0;
	for(int i = n1 - 1 ; i >= 0 ; i--){
		if(xau_a){
			if(x[i] == y[i]) continue;
			else if(x[i] > y[i]){
			 	var = 1;
				break;
			}else if(y[i] > x[i]){
				var = 2;
				break;
			}
		}
		// th xau a lon hon xau b
		else if(xau_b)
		{
			if(x[i] == y[i]) continue;
			else if(x[i] > y[i]){
				var = 2;
				break;
			}else if(x[i] < y[i]){
				var = 1;
				break;
			}
		}
	}
	gotoxy(0, 7);
}

// ham check xem a || b != 0 || == 0
string xau_khac_khong(string a){
	bool check = false;
	string xau_chinh = "";
	int cnt = 0;
	if(a[0] == '-')
	{
		xau_chinh += '-';
		++cnt;
	}
	for(int i = cnt ; i < a.size(); ++i){
		if(a[i] == '0' && check == false) continue;
		else{
			check = true;
			xau_chinh += a[i]; 
		}
	}
	if(xau_chinh == "-" || xau_chinh.size() == 0) xau_chinh = "0";
	return xau_chinh;
}

// ham kiem tra xau nhap vao co hop le hay khong

int check_so(string a){
	if((a == "ANS" || a == "ans") && gia_tri_a == 0){
		++gia_tri_a;
		return 1;
	}else if((a == "ANS" || a == "ans") && gia_tri_b == 0){
		++gia_tri_b;
		return 1;
	}
	else 
	{
		for(int i = 0 ; i < a.size() ; ++i){
			if(i > 0){
				if('0' <= a[i] && a[i] <= '9') continue;
		    	else return 0;
			}else
			{
				if(a[i] == '-') continue;
				else if('0' <= a[i] && a[i] <= '9') continue;
				else return 0;
			}
		}
	}
	return 1;
}

// ham kiem tra do dai cua xau (th cua phep chia !!!)
int check_do_dai(string a){
	int do_dai = a.size();
	if(do_dai <= 18) return 1;
	else return 0;
}

//                           Mot so ham xet dau cho xau !!!

// ham xet dau ( + || -)
void xet_dau(){
	// th var = 0 -- > a == b
	if(var == 0){
		//th dau == '-' 
		if(dau == '-' && dau_a == '-' && dau_b == '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '-' && dau_a != '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}else if(dau == '-' && dau_a == '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '-' && dau_a != '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}
		// th dau == '+'
		else if(dau == '+' && dau_a == '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '+' && dau_a != '-' && dau_b == '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '+' && dau_a == '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '+' && dau_a != '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}
	}else if(var == 1){
		//th dau == '-'
		if(dau == '-' && dau_a == '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '-' && dau_a == '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '-' && dau_a != '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}else if(dau == '-' && dau_a != '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}
		//th dau == '+'
		else if(dau == '+' && dau_a == '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '+' && dau_a == '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = '-';
		}else if(dau == '+' && dau_a != '-' && dau_b == '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '+' && dau_a != '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}
	}else if(var == 2){
		// th dau == '-'
		if(dau == '-' && dau_a == '-' && dau_b == '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '-' && dau_a == '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '-' && dau_a != '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}else if(dau == '-' && dau_a != '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = '-';
		}
		//th dau == '+'
		else if(dau == '+' && dau_a == '-' && dau_b == '-'){
			dau = '+'; dau_dang_truoc = '-';
		}else if(dau == '+' && dau_a == '-' && dau_b != '-'){
			dau = '-'; dau_dang_truoc = ' ';
		}else if(dau == '+' && dau_a != '-' && dau_b == '-'){
			dau = '-'; dau_dang_truoc = '-';
		}else if(dau == '+' && dau_a != '-' && dau_b != '-'){
			dau = '+'; dau_dang_truoc = ' ';
		}
	}
}
// ham xet dau ( x || %)
void xet_dau_2(string a, string b){
	if(a == "0" || b == "0") dau_dang_truoc = ' ';
	else if(a[0] == '-' && b[0] == '-') dau_dang_truoc = ' ';// dau dang truoc == ' '
	else if(a[0] == '-' && b[0] != '-') dau_dang_truoc = '-';// dau dang truoc == '-'
	else if(a[0] != '-' && b[0] == '-') dau_dang_truoc = '-';// dau dang truoc == '-'
	else dau_dang_truoc = ' ';
}

               // Nhap so, chon phep toan va tinh toan!!!

// Nhap so A
void nhap_so_dau_tien(){
	gotoxy(0, 0);
	SetColor(10);
	cout << "Ans : ";
	SetColor(15);
	if(ANS.size() > 21){
	gotoxy(6, 0);
	for(int i = 0 ; i <= 20 ; ++i) cout << ANS[i];
	cout << "...";
	}else{
		SetColor(14);
		cout << ANS;
	}
	gotoxy(10, 4); SetColor(10);
	cout << "A : ";
	SetColor(15);
	getline(cin, so_dau_tien);
	int kiem_tra = check_so(so_dau_tien);
	while(!kiem_tra){
		gia_tri_a = 0;
        system("cls");
        gotoxy(13, 2); SetColor(4); cout << "  Syntax error !!!";
		gotoxy(10, 4); SetColor(10);
		cout << "                                                                                                             ";
		gotoxy(10, 4);
     	cout << "A : ";
    	SetColor(15);
     	getline(cin, so_dau_tien);
     	kiem_tra = check_so(so_dau_tien);
	}
    if(gia_tri_a) so_dau_tien = ANS;
    if(so_dau_tien[0] == '-') dau_a = '-';
	gotoxy(10, 4); cout << "                                                                                         ";
	gotoxy(10, 4); SetColor(10); cout << "A : ";
	SetColor(15); cout << so_dau_tien;
	so_dau_tien = xau_khac_khong(so_dau_tien);
	++gia_tri_a;
}

// Nhap phep tinh (+, -, x, %)
void chon_phep_toan()
{
	gotoxy(0, 0); cout << "                                           ";
    gotoxy(10, 2); cout << "                                           ";
	gotoxy(15, 6); SetColor(14); cout << "| "; SetColor(10); cout << '+'; SetColor(14); cout << " |";
	gotoxy(15, 8); SetColor(14); cout << "| "; SetColor(10); cout << '-'; SetColor(14); cout << " |";
	gotoxy(15, 10); SetColor(14); cout << "| "; SetColor(10); cout << 'x'; SetColor(14); cout << " |";
    gotoxy(15, 12);	SetColor(14); cout << "| ";	SetColor(10); cout << ki_tu_chia; SetColor(14); cout << " |";
    SetColor(14); cout << "   ( A <= 10^18   va   B <= 10^18 )";
	int x = 15, y = 6;
	int xcu = 15, ycu = y;
	int vi_tri = 0;
	while(true){
    	gotoxy(8, ycu);
		cout << "    ";
		SetColor(15);	
		gotoxy(8, y);
		cout << "--->";
		ycu = y;
		if(_kbhit()){
			char ki_tu = getch();
			if(ki_tu == 's' && y <= 10){
				y += 2;
			}else if(ki_tu == 'w' && y >= 8){
				y -= 2;
			}else if(ki_tu == ' '){
				vi_tri = y;
				break;
			}
		}	
		Sleep(100);
	}
	if(vi_tri == 6) dau = '+';
	else if(vi_tri == 8) dau = '-';
	else if(vi_tri == 10) dau = 'x';
	else if(vi_tri == 12) dau = ki_tu_chia;
	system("cls");
}

// nhap so B
void nhap_so_thu_hai(){
    if(dau == ki_tu_chia){
    	gotoxy(0, 0);
		SetColor(10);
		cout << "Ans : ";
		SetColor(15);
		if(ANS.size() > 21){
			gotoxy(6, 0);
			for(int i = 0 ; i <= 20 ; ++i) cout << ANS[i];
			cout << "...";
		}else{
			SetColor(14);
			cout << ANS;
		}
    	int check_so_xau_dau_tien = check_so(so_dau_tien);
		int check_do_dai_xau_dau_tien = check_do_dai(so_dau_tien);
		while(!check_so_xau_dau_tien || !check_do_dai_xau_dau_tien){
			gia_tri_a = 0;
			system("cls");
            gotoxy(13, 2); SetColor(4); cout << "  Syntax error !!!";
			gotoxy(10, 4); SetColor(10);
			cout << "                                                                                                             ";
			gotoxy(10, 4);
         	cout << "A : ";
			SetColor(15);
			getline(cin, so_dau_tien);
			check_so_xau_dau_tien = check_so(so_dau_tien);
			check_do_dai_xau_dau_tien = check_do_dai(so_dau_tien);
		}
		if(gia_tri_a) so_dau_tien = ANS;
		if(so_dau_tien[0] == '-') dau_a = '-';
		gia_tri_a = 1;
		so_dau_tien = xau_khac_khong(so_dau_tien);
	    gotoxy(5, 2);
	    cout << "                                                                                    ";
	    gotoxy(10, 4);
		cout << "                                                                                                             ";
	    gotoxy(10, 4); SetColor(10);
		cout << "B : ";
		SetColor(15);
		getline(cin, so_tiep_theo);
		int check_so_xau_tiep_theo = check_so(so_tiep_theo);
		int check_do_dai_xau_tiep_theo = check_do_dai(so_tiep_theo);
		while(!check_so_xau_tiep_theo || !check_do_dai_xau_tiep_theo){
			gia_tri_b = 0;
			system("cls");
            gotoxy(13, 2); SetColor(4); cout << "  Syntax error !!!";
			gotoxy(10, 4); SetColor(10);
			cout << "                                                                                                             ";
			gotoxy(10, 4);
	     	cout << "B: ";
	    	SetColor(15);
	     	getline(cin, so_tiep_theo);
	     	check_so_xau_tiep_theo = check_so(so_tiep_theo);
	     	check_do_dai_xau_tiep_theo = check_do_dai(so_tiep_theo);
		}
		if(gia_tri_b) so_tiep_theo = ANS;
		if(so_tiep_theo[0] == '-') dau_b = '-';
		gotoxy(10, 4); cout << "                                                                                         "; gotoxy(10, 4);
		SetColor(7); SetColor(11); cout << "                   ";
		gotoxy(10, 2); cout << "                                           ";
		gotoxy(5, 3); SetColor(15); cout << "--> "; SetColor(14); cout << so_dau_tien; SetColor(10); cout << ' ' << dau << ' '; SetColor(14); cout << so_tiep_theo;
		so_tiep_theo = xau_khac_khong(so_tiep_theo);
	}else
	{
		gotoxy(0, 0);
		SetColor(10);
		cout << "Ans : ";
		SetColor(15);
		if(ANS.size() > 21){
			gotoxy(6, 0);
			for(int i = 0 ; i <= 20 ; ++i) cout << ANS[i];
			cout << "...";
		}else{
			SetColor(14);
			cout << ANS;
		}

		gotoxy(5, 2);
	    cout << "                                                                                    ";
	    gotoxy(10, 4); SetColor(7);
		cout << "                                                                                                             ";
	    gotoxy(10, 4); SetColor(10);
		cout << "B : ";
		SetColor(15);
		getline(cin, so_tiep_theo);
		int check_so_xau_tiep_theo = check_so(so_tiep_theo);
		gia_tri_a = 1;
		while(!check_so_xau_tiep_theo){
			gia_tri_b = 0;
	    	system("cls");
            gotoxy(13, 2); SetColor(4); cout << "  Syntax error !!!";
			gotoxy(10, 4); SetColor(10);
			cout << "                                                                                                             ";
			gotoxy(10, 4);
			SetColor(10);
	     	cout << "B : ";
	    	SetColor(14);
	     	getline(cin, so_tiep_theo);
	     	check_so_xau_tiep_theo = check_so(so_tiep_theo);
		}
        if(gia_tri_b) so_tiep_theo = ANS;
		so_tiep_theo = xau_khac_khong(so_tiep_theo);
		if(so_tiep_theo[0] == '-') dau_b = '-';
		gotoxy(10, 4); cout << "                                                                                         "; gotoxy(10, 4);
		SetColor(7); SetColor(11); cout << "                   ";
		gotoxy(10, 2); cout << "                                           ";
		gotoxy(5, 3); SetColor(15); cout << "--> "; SetColor(14); cout << so_dau_tien; SetColor(10); cout << ' ' << dau << ' '; SetColor(14); cout << so_tiep_theo;
	}
}

// ham tinh toan dua vao dac diem cua cac ham tren !!!
void tinh_toan(){
	if(dau == '+'){
		if(var == 0) Tong(so_dau_tien, so_tiep_theo);
		else if(var == 1) Tong(so_dau_tien, so_tiep_theo);
		else if(var == 2) Tong(so_tiep_theo, so_dau_tien);
	}else if(dau == '-'){
		if(var == 0) Hieu(so_dau_tien, so_tiep_theo);
		else if(var == 1) Hieu(so_dau_tien, so_tiep_theo);
		else if(var == 2 )Hieu(so_tiep_theo, so_dau_tien);
	}
	else if(dau == ki_tu_chia){
		Chia(so_dau_tien, so_tiep_theo);
	}else Nhan(so_dau_tien, so_tiep_theo);
}

// ham xu li : ) 
int main()
{
	while(1){
		dau_a = ' ', dau_b = ' ';
		gia_tri_a = 0; gia_tri_b = 0;
		var = 0;
		system("cls");
		nhap_so_dau_tien();
		chon_phep_toan();
		nhap_so_thu_hai();
//		gotoxy(10, 2); SetColor(13); cout << gia_tri_a << " " << gia_tri_b;		
		check(so_dau_tien, so_tiep_theo);
//		gotoxy(10, 1); SetColor(13); cout << so_dau_tien << " " << so_tiep_theo;
//		gotoxy(10, 1); SetColor(13);
//		cout << var;
		if(dau == '-' || dau == '+') xet_dau();
		else if(dau == 'x') xet_dau_2(so_dau_tien, so_tiep_theo);
		tinh_toan();
		for(int i = 0 ; i <= 20 ; ++i){
			Sleep(100);
		}
        int mau1 = 10, mau2 = 14, mau_fake = mau1;
        int x = 1, y = 10, xcu = x;
        int check = 0;
		while(1){
			SetColor(mau1);
			gotoxy(3, 10); SetColor(12);
			SetColor(mau1);
			gotoxy(xcu, y);
			cout << "                        ";
			gotoxy(x, y);
			cout << "An SPACE de quay lai !!!";
			if(_kbhit()){
				char ki_tu = getch();
				if(ki_tu == ' ') break;
			}
			Sleep(150);
			xcu = x;
			if(x < 50 && check == 0) ++x;
			else{
		    	x--;
				check = 1;	
			} 
			if(x == 3 && check == 1) check = 0;
			mau1 = mau2, mau2 = mau_fake, mau_fake = mau1;
		}
	}
	return 0;
}

