#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	if(1<=t<=1000){
	while (t--) {
		cin>>a>>b>>c;
		int x=max(a,b);
		x=max(x,c);
		int y=min(a,b);
		y=min(y,c);
		int total=a+b+c;
		int midn=total-x-y;
		cout<<midn<<endl;
	}
}
	return 0;
}
