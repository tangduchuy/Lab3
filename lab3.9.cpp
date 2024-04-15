#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long int n, m, ntN;
    cout << "Nhap so nguyen duong:";
    cin >> n;
    m = 2;
    cout << "So nguyen to thu " << n << " la ";
    while (n > 0) {
        long int i = int(sqrt(m));
        bool nt = true;
        while (nt && i > 1) {
            if (m % i == 0) {
                nt = false;
            }
            i--;
        }
        if (nt) {
            n--;
            ntN = m;
        }
        m++;
    }
    cout << ntN;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
