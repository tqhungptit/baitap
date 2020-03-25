#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],n,k;
bool end=false;

void init(){
    for(ll i=1;i<=k;i++)
        a[i]=i;
}
void display(){
    for(ll i=1;i<=k;i++) cout << a[i] << ' ';
    cout << endl;
}
void next(){
	ll i=k;
	while(a[i]==n+i-k && i>0)	i--;
	if(i==0) end=true;
	else{
		a[i]++;
		for(ll j=i+1;j<=k;j++)	a[j]=a[i]+j-i;
	}
}
main(){
	cin >> n >> k;
    init();
    while(!end){
    	display();
    	next();
	}
}

