#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll GCD(ll a, ll b){
	if(b==0) return a;
	return GCD(b,a%b);
}
main(){
	ll a,b;	cin >> a >> b;
	cout << GCD(a,b);
}

