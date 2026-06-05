#include <iostream>

int main() {
    int tomate = 0, cebola = 0, alho = 0, picar = 1;

    do
    {
        tomate++;
        cebola++;
        alho+=2;
        std::cout << "Picar mais uma leva?(1/0)\n";
        std::cin >> picar;
    } while (picar != 0);
    std::cout << "--- TOTAL ---\nTomate: " << tomate << "\ncebola: " << cebola << "\nalho: " << alho;
}