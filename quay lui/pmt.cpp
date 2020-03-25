#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],b[100],n;
void init(){
	cin >> n;
	for(ll i=1;i<=n;i++){
		a[i]=i;
		b[i]=0;
	}
}
void display(){
    for(ll i=1;i<=n;i++) cout << a[i] << ' ';
    cout << endl;
}
void Try(ll i){
	for(ll j=1;j<=n;j++){
		if(b[j]==0){
			a[i]=j;
			b[j]=1;
			if(i==n){
				display();
			}
			else Try(i+1);
			b[j]=0;
		}
	}
}
main(){
    init();
    Try(1);
}
