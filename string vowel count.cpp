
//To count the number of vowels in a string using C++ STL, you can use the std::count_if() algorithm with a lambda function that tests whether each character is a vowel. Here's an example:

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s = "Hello World!";
    int vowel_count = std::count_if(s.begin(), s.end(), [](char c) { return std::string("AEIOUaeiou").find(c) != std::string::npos; });
    std::cout << "The number of vowels in \"" << s << "\" is: " << vowel_count << std::endl;
    return 0;
}
/*In this example, a std::string is created and initialized with the value "Hello World!". The std::count_if() function is then called on the range of characters in the string, with a lambda function provided as the third argument. This lambda function takes a character c and returns a boolean value indicating whether c is a vowel (std::string("AEIOUaeiou").find(c) != std::string::npos). The std::count_if() function counts the number of elements for which this function returns true. Finally, the resulting count is printed to the console.

The output of this code will be "The number of vowels in "Hello World!" is: 3", which represents the number of vowels in the original string.

Note that std::count_if() can be used to count any subset of elements from a container, based on a specified condition. The std::string::find() function is used in the lambda function to search for the current character within a string of vowels (AEIOUaeiou).
