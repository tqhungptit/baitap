#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll factor(ll n){
	if(n==1) return 1;
	return n*factor(n-1);
}
main(){
	ll n;	cin >> n;
	cout << factor(n);
}

