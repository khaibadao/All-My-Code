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
	        if(b[i] == '-') x[i] = 0;
	        else x[i] = b[i] - '0';
		}
		for(int i = 0 ; i < n2 ; ++i){
			if(a[i] == '-') y[i] = 0;
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
