

//To square all numbers in a container using C++ STL, you can use std::transform() function along with a lambda function that squares each element of the container. Here's an example:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * x; });
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
/*In this example, a std::vector container is created and initialized with the values 1, 2, 3, 4, and 5. The std::transform() function is then called on the range of elements in the vector, with a lambda function provided as the third argument. This lambda function takes an integer x and returns its square x * x. The std::transform() function applies this function to every element in the range and stores the result in the same container. Finally, a loop is used to print out the resulting vector to the console.

The output of this code will be "1 4 9 16 25", which represents the squares of the original vector elements.

Note that std::transform() can be used to apply any unary function to all elements of a container.*/
