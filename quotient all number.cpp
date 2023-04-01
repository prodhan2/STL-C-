#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {10, 5, 2};
    double quotient = std::accumulate(v.begin(), v.end(), 1.0, [](double a, int b) { return a / b; });
    std::cout << "The quotient of the vector is: " << quotient << std::endl;
    return 0;
}
