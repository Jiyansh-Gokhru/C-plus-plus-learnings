#include <iostream>

using namespace std;

unsigned int reverseBits(unsigned int n) {
    unsigned int reversed = 0;
    for (int i = 0; i < 32; i++) {
        reversed <<= 1;
        reversed |= (n & 1);
        n >>= 1;
    }   
    return reversed;
}

int main() {
unsigned int num = 43261596; // Example input
cout << "Reversed bits: " << reverseBits(num) << endl;
return 0;
}