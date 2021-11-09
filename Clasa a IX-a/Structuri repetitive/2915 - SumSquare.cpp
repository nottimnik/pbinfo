#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	long long int i = 1;
	bool gasit = false;	
	for(long long int i = 1;i*i<=n/2;++i) {
		long long int y = n-i*i;
		long long int n = sqrt(y);
		
		if(n*n==y) {
			cout << min(i*i,y) << ' ' << max(i*i,y), gasit = true;
			break;
		}
	}

	if(!gasit) {
		cout << "NU";
	}

	return 0;	

}
