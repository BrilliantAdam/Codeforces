//brilliantadam
#include <iostream>

int main() {
    int a, b; // weights of Limak and Bob
    std::cin >> a >> b;

    int years = 0; // number of years

    while (a <= b) {
        a *= 3; // Limak's weight triples
        b *= 2; // Bob's weight doubles
        years++; // increment years
    }

    std::cout << years << std::endl;

    return 0;
}
