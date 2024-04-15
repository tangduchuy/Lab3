#include <iostream>
#include <limits> 

int main() {
    double number;
    double min = std::numeric_limits<double>::max();
    int count = 0;

    std::cout << "Nhap vao cac so thuc (0 de ket thuc): " << std::endl;

    do {
        std::cin >> number;
        if (number != 0) {
            count++;
            if (number < min) {
                min = number;
            }
        }
    } while (number != 0);

    std::cout << "Ban ?a nhap vao " << count + 1 << " so thuc." << std::endl;
    std::cout << "So thuc nho nhat la: " << min << std::endl;

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
