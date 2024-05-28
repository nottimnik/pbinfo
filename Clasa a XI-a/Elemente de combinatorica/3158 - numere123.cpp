#include <iostream>
#include <cstring> // For memset

using namespace std;

int n, frec[20], res[20], v[20];

void afisare() {
    for (int i = 1; i <= n; i++)
        cout << v[res[i]];
    cout << '\n';
}

void back(int k) {
    for (int i = 1; i <= n; i++) {
        if (!frec[i]) {
            res[k] = i;
            frec[i] = 1;

            if(k == 1 && v[i] == 0);
            else {
            if (k < n) back(k + 1);
            else {
                afisare();
            }
            }

            frec[i] = 0;
        }
    }
}

void sortare() {
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (v[i] > v[j]) swap(v[i], v[j]);
        }
    }
}

int main() {
    int num;
    cin >> num;
    int j = 1;
    while (num) {
        v[j++] = num % 10;
        num /= 10;
    }
    n = j - 1;

    sortare();
    memset(frec, 0, sizeof(frec));
    memset(res, 0, sizeof(res));

    back(1);

    return 0;
}
