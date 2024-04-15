#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int m, n;


    std::cout << "Nhap so nguyen duong m: ";
    std::cin >> m;
    std::cout << "Nhap so nguyen duong n: ";
    std::cin >> n;

    if (gcd(m, n) == 1) {
        std::cout << "Hai so " << m << " va " << n << " la nguyen to cung nhau." << std::endl;
    }
    else {
        std::cout << "Hai so " << m << " va " << n << " khong phai la nguyen to cung nhau." << std::endl;
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
