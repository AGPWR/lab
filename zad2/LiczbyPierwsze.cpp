//gcc 6.3.0
#include <math.h>
#include "LiczbyPierwsze.hpp"

using namespace std;

//kontruktor
LiczbyPierwsze::LiczbyPierwsze(int n)
{
    this->tablica = new int[n + 1];
    for (int i = 0; i < n + 1; i++){
        this->tablica[i] = 0;
    }
    
    bool *czyPierwsza = new bool[n+1];

    czyPierwsza[0] = false; 
    czyPierwsza[1] = false;
    for (int i = 2; i <= n+1; i++){
        czyPierwsza[i] = true;
    }
    for (int p = 0; p < sqrt(n+1); p++){
        if(czyPierwsza[p] == true){
            for (int j = p; j*p < n+1; j++){
                czyPierwsza[j*p] = false;
            }
        }
    }
    int k = 0;
    for (int i = 2; i <=n; i++){
        if(czyPierwsza[i] == true){
            this->tablica[k] = i;
            k++;
        }
    }   
}
//metoda
int LiczbyPierwsze::liczba(int m){
    return this->tablica[m];
}
