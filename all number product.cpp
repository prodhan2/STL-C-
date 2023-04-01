#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int product = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) { return a * b; });
    std::cout << "The product of the vector is: " << product << std::endl;
    return 0;
}
