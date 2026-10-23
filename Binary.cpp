#include <iostream>
using namespace std;

int DtoB(int n) {
    int binary = 0;
    int place = 1; 

    while (n > 0) {
        int rem = n % 2;
        binary += rem * place;
        n /= 2;
        place *= 10;
    }

    return binary;
}

int BtoD(int n){
    int decimal=0;
    int pow=1;

    while(n>0){
        int rem=n%10;
        decimal+=rem*pow;
        pow*=2;
        n=n/10;
    }

    return decimal;

}

int main() {
    int x;
    int y;
    cin>>x;
    cin>>y;
    cout << DtoB(x) << endl; 
    cout << BtoD(y) << endl; 
    return 0;
}