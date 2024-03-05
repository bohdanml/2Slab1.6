
#include <iostream>
#include "pair.h"

int main() {
    Pair pair1;
    pair1.Read();

    Pair pair2;
    pair2.Read();

    Pair sum = pair1 + pair2;
    Pair difference = pair1 - pair2;
    Pair product = pair1 * pair2;
    Pair quotient = pair1 / pair2;
    //(a, b) + (c, d)
    std::cout << "Sum: ";
    sum.Display();
    std::cout << std::endl;
    //(a, b) - (c, d)
    std::cout << "Difference: ";
    difference.Display();
    std::cout << std::endl;
    //(a, b) * (c, d)
    std::cout << "Product: ";
    product.Display();
    std::cout << std::endl;
    // (a, b) / (c, d)
    std::cout << "Quotient: ";
    quotient.Display();
    std::cout << std::endl;

    return 0;
}
