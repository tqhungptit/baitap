#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],n;
void display(){
    for(ll i=1;i<=n;i++) cout << a[i];
    cout << endl;
}
void Try(ll i){
	for(ll j=0;j<2;j++){
		a[i]=j;
		if(i==n) display();
		else Try(i+1);
	}
}
main(){
    cin >> n;
    Try(1);
}
