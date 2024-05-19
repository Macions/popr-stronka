#include <iostream>
using namespace std;

int ilosc(int cyfra){
    int ilosc_liczb=0;
    
    if(cyfra == 0){
        return 1;
    }
    
    while(cyfra != 0){
        ilosc_liczb++;
        cyfra/=10;
    }
    
    return ilosc_liczb;
}

int main() {
    int liczba;
    cin >> liczba;
    
    cout << ilosc(liczba);

    return 0;
}