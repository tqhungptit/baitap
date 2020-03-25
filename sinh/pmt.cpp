#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[100],n;
void init(){
    for(ll i=1;i<=n;i++)
        a[i]=i;
}
void display(){
    for(ll i=1;i<=n;i++) cout << a[i] << ' ';
    cout << endl;
}
bool cmp(ll a, ll b){
	return a>b;
}
bool end(){
	return is_sorted(a+1,a+n+1,cmp);
}
void next(){
	for(ll i=n-1;i>0;i--){
		if(a[i]<a[i+1]){
			for(ll j=n;j>i;j--){
				if(a[j]>a[i]){
					swap(a[i],a[j]);
					sort(a+i+1,a+n+1);
					break;
				}
			}
			break;
		}
	}
}
main(){
	cin >> n;
    init();
	display();
    while(!end()){
    	next();
    	display();
	}
}

