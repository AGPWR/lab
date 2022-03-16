//gcc 6.3.0
#include <iostream>
#include <cstdlib>
#include "LiczbyPierwsze.hpp"
using namespace std;
bool czyLiczba(const char *pStr){
        if(*pStr == NULL || *pStr == '\0')
            return false;

        int licznikMinusow = 0;
        
        while (*pStr){
            switch(*pStr){
                case '-':
                    if(++licznikMinusow > 1)
                        return false;
                    break;
                default:
                    if(*pStr < '0' || *pStr > '9')
                        return false;
            }
            pStr++;
        }
    return true;   
}


int main(int argc, char *argv[]){
    


    try{
        LiczbyPierwsze * Lp = new LiczbyPierwsze(atoi(argv[1]));
        for (int i = 2; i < argc; i++){

            int n = atoi(argv[i]);
            if(czyLiczba(argv[i])){
                if(Lp->liczba(n) == 0 || n < 0 || Lp->liczba(n)>atoi(argv[1])){
                    cout << n << " - liczba spoza zakresu" << endl;
                } 
                else{
                    cout << n << " - " << Lp->liczba(n) << endl;
                }
            } else{
                cout << argv[i] << " - nieprawidlowa dana" << endl;
            }
            
        }
    } catch(const std::bad_array_new_length &e){
        cout << atoi(argv[1]) << " - Nieprawidlowy zakres" << endl;
    }
    
}