Sujan Prodhan


//The std::transform() algorithm in C++ STL is used to apply a given function to each element in a range and store the result in another range. It takes two input ranges, an output range, and a unary or binary function that defines the transformation to apply.

//Here are some examples of std::transform() usage with different transformation functions:

Transforming a vector of integers to a vector of their squares:
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> squared(v.size());
    std::transform(v.begin(), v.end(), squared.begin(), [](int x) { return x * x; });
    for (int x : squared) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}



Transforming a vector of integers to a vector of their negations:

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> negated(v.size());
    std::transform(v.begin(), v.end(), negated.begin(), [](int x) { return -x; });
    for (int x : negated) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}


Transforming a vector of strings to a vector of their lengths:

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
int main() {
    std::vector<std::string> v = {"apple", "banana", "cherry", "date", "elderberry"};
    std::vector<size_t> lengths(v.size());
    std::transform(v.begin(), v.end(), lengths.begin(), [](const std::string& s) { return s.length(); });
    for (size_t len : lengths) {
        std::cout << len << " ";
    }
    std::cout << std::endl;
    return 0;
}
In each of these examples, std::transform() is called with an input range, an output range, and a transformation function that defines the operation to apply to each element in the input range. The function returns a new range containing the transformed elements.
