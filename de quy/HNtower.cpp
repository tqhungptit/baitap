#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void sol(int n, char A, char B, char C){
	if(n==1)	cout << A << " => " << C;
	else{
		sol(n-1,A,C,B);
		sol(1,A,B,C);
		sol(n-1,B,A,C);
	}
}

main(){
	int n;	cin >> n;
	sol(n,'A','B','C');
	return 0;
}

