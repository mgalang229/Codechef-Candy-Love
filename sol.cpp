#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e3;
int a[mxN], n, t;

int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int sum=0;
		for(int i=0; i<n; ++i)
			sum+=a[i];
		cout << (sum%2==1?"YES":"NO") << "\n";
	}
}
