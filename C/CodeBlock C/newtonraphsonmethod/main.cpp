#include <iostream>
#include <cmath>

double f(double x) {
    return pow(x, 3) - 5 * pow(x, 2) + 9 * x - 1;
}

double f_prime(double x) {
    return 3 * pow(x, 2) - 10 * x + 9;
}

int main() {
    double hata = 0.002;
    double x0 = 1;
    double x1 = 0.8;
    double xn = x1;

    while (true) {
        double f_xn = f(xn);
        double f_prime_xn = f_prime(xn);
        double x_next = xn - (f_xn / f_prime_xn);

        if (std::abs(x_next - xn) < hata) {
            break;
        }

        xn = x_next;
    }

    double kok_degeri = xn;
    std::cout << "Kök Deðeri: " << kok_degeri << std::endl;

    return 0;
}
