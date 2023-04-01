
//To return only the even numbers from a container using C++ STL, you can use the std::copy_if() algorithm with a lambda function that tests whether each element is even. Here's an example:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> even_numbers;
    std::copy_if(v.begin(), v.end(), std::back_inserter(even_numbers), [](int x) { return x % 2 == 0; });
    for (int x : even_numbers) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
/* In this example, a std::vector container is created and initialized with the values 1 through 10. A second vector, even_numbers, is also created. The std::copy_if() function is then called on the range of elements in the first vector, with a lambda function provided as the third argument. This lambda function takes an integer x and returns a boolean value indicating whether x is even (x % 2 == 0). The std::copy_if() function copies only the elements for which this function returns true into the second vector using std::back_inserter(). Finally, a loop is used to print out the resulting vector to the console.

The output of this code will be "2 4 6 8 10", which represents the even numbers from the original vector.

Note that std::copy_if() can be used to copy any subset of elements from a container, based on a specified condition.
