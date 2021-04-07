#include<iostream>

using namespace std;

int v[101][101];

int main() {
	int n;
	cin >> n;

	//declaram vectorul
	for(int i = 0;i<n;++i) {
		for(int j = 0;j<n;++j) {
			cin >> v[i][j];
		}
	}

	int diagonala = 0;
	while(diagonala!=n-1) {
		for(int i = diagonala+1;i<n;++i) {
			int temp = v[diagonala][i];
			v[diagonala][i] = v[i][diagonala];
			v[i][diagonala] = temp;
		}
		++diagonala;
	}

	for(int i = 0;i<n;++i) {
		for(int j = 0;j<n;++j) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
