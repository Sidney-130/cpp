#include <iostream>

int main () {
    int x[5] = {0, 2, 2, 3, 4};
    int y[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++){
        std::cout << "(" << x[i] <<", " << y[i] << ")" <<std::endl;
    }

    return 0;
}