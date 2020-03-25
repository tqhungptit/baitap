#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],n;
bool end=false;

void init(){
    for(ll i=1;i<=n;i++)
        a[i]=0;
}
void display(){
    for(ll i=1;i<=n;i++) cout << a[i] << ' ';
    cout << endl;
}
void next(){
	ll i=n;
	while(a[i]==1 && i>0)	i--;
	if(i==0) end=true;
	else{
		a[i]=1;
		for(ll j=i+1;j<=n;j++) a[j]=0;
	}
}
main(){
    cin >> n;
    init();
    while(!end){
    	display();
    	next();
	}
}
