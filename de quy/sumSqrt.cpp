#include <iostream>
#include <cmath>
using namespace std;
 
double sum(int n){
	if(n==1) return 1;
	return sqrt(n+sum(n-1));
}
int main() {
	int n; cin >> n;
	cout << sum(n);
	return 0;
}
