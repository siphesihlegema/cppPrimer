#include <iostream>

int main() {
    // this is just a 3x3x3 zero matrix
    int arr[3][3][3] {0};

    int arr2[3][3] {
        {0, 0, 1},
        {0, 1, 0},
        {1, 0, 0}
        };

    // equivalent to arr2
    int arr3[3][3] {0, 0, 1, 0, 1, 0, 1, 0, 0};

    // we can also do subscripting
    std::cout << arr2[1][1] << '\n';

    int ell {1};
    for (auto &x: arr)
        for (auto &y: x)
            for (auto &x: y) {
                x = ell;
                ++ell;
                std::cout << x << ' ';
            }
    std::cout << '\n';


}
