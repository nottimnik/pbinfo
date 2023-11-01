#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[1001], m[1001][1001];
    int sume[1001];
    cin.getline(a, 1001);
    
    int ind=0, ok = 0;
    
    // facem vectorul cu cuvintele bune
    char *p = strtok(a, " ");
    while(p) {
        int cuvant = 0;
        int suma = 0;

        for(int i = 0;p[i];i++) {
            suma += int(p[i]);
            if(isalpha(p[i])) cuvant = 1;
        }        
        
        if(cuvant) {
            strcpy(m[ind], p);
            sume[ind++] = suma;
            ok = 1;
        }
        
        
        
        p = strtok(NULL, " ");
    }
    
    //daca nu gasim niciun cuvant afisam mesajul nu exista
    if(!ok) {
        cout << "NU EXISTA";
        return 0;
    }
    
    //ordonam cuvintele in functie de suma ASCII
    for(int i = 0;i<=ind;i++) 
        for(int j = i + 1;j<=ind;j++) 
            if(sume[i] > sume[j]) {
                swap(sume[i], sume[j]);
                swap(m[i], m[j]);
            }
        
    
    //verificam daca cuvintele care au aceiasi suma sunt puse in ordinea initiala
    for(int i = 0;i<ind;i++) {
        
        char c[1001], b[1001];
        strcpy(a, m[i]);
        strcpy(b, m[i+1]);
        
        if(sume[i] == sume[i+1]) {
            if(strstr(strstr(a, c), b) == NULL) swap(m[i],m[i+1]);
            
        }
    }
        
        
    //afisam
    for(int i = 1;i<=ind;i++) {
        cout << sume[i] << ' ' << m[i] << ' ';
        
        int j = i + 1;
        int suma = sume[i];
        
        if(j <= ind) {
            while(suma == sume[j] && j <= ind) {
                cout << m[j] << ' ';
                j++;
            } 
            i = j - 1;
        }
        
        
        cout << '\n';
    }
    
    return 0;
}
