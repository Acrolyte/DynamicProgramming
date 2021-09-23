#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pow(n) 2^n

int main()
{
	ll t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		n= pow(n);
		n = n>>1;
		cout<<n;
	}
	return 0;
}   