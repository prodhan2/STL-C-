

//The std::count_if() algorithm in C++ STL is used to count the number of elements in a given range that satisfy a particular condition. It takes two iterators representing the range to search, and a unary predicate function that defines the condition to check.

//Here are some examples of std::count_if() usage with different predicate functions:

Counting the number of even numbers in a vector:

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int evenCount = std::count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    std::cout << "There are " << evenCount << " even numbers in the vector." << std::endl;
    return 0;
}



Counting the number of elements in a vector that are greater than 5:
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int greaterThan5Count = std::count_if(v.begin(), v.end(), [](int x) { return x > 5; });
    std::cout << "There are " << greaterThan5Count << " elements in the vector greater than 5." << std::endl;
    return 0;
}




Counting the number of elements in a vector that contain the letter 'a':
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
int main() {
    std::vector<std::string> v = {"apple", "banana", "cherry", "date", "elderberry"};
    int containsACount = std::count_if(v.begin(), v.end(), [](const std::string& s) { return s.find('a') != std::string::npos; });
    std::cout << "There are " << containsACount << " elements in the vector that contain the letter 'a'." << std::endl;
    return 0;
}


In each of these examples, std::count_if() is called with a range of elements and a predicate function that defines the condition to check. The function returns the number of elements in the range that satisfy the condition.
