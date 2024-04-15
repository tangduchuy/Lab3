#include <iostream>
#include<math.h>
using namespace std;

double calculateSum(int N) {
    double S = 1.0; // Kh?i t?o S v?i giá tr? ??u tiên c?a chu?i
    for (int i = 1; i <= N; ++i) {
        S += pow(-1, i) * (1.0 / (i * (i + 1)));
    }
    return S;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (N > 0) {
        double sum = calculateSum(N);
        cout << "Tong S la: " << sum << endl;
    }
    else {
        cout << "Vui long nhap mot so nguyen duong." << endl;
    }

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
