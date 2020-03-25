#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],n,k;
void init(){
	cin >> n >> k;
	for(ll i=1;i<=k;i++) a[i]=i;
}
void display(){
    for(ll i=1;i<=k;i++) cout << a[i] << ' ';
    cout << endl;
}
void Try(ll i){
	for(ll j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) display();
		else Try(i+1);
	}
}
main(){
    init();
    Try(1);
}
