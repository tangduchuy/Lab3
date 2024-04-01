

#include <iostream>

int main() {
    int a, n;
    std::cout << "Nhap gia tri cua a: ";
    std::cin >> a;
    std::cout << "Nhap gia tri cua n: ";
    std::cin >> n;

    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }

    std::cout << "a luy thua n là: " << result << std::endl;
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
