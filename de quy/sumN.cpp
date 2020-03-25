#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum(ll n){
	if(n==0) return 0;
	return n+sum(n-1);
}

main(){
	ll n;	cin >> n;
	cout << sum(n);
}

