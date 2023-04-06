
#include <iostream>

#include <algorithm>

#include <vector>

int main() {

    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    // Check if the vector is sorted

    if (std::is_sorted(numbers.begin(), numbers.end())) {

        std::cout << "The vector is sorted in ascending order" << std::endl;

    } else {

        std::cout << "The vector is not sorted in ascending order" << std::endl;

    }

    return 0;

}
