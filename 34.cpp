#include <iostream>
#include <cstring> // Include the cstring header for strlen

int main() {
    // Create a C-style string (character array)
    const char* cStyleString = "welcome to c++ program";

    // Calculate the length of the string
    size_t length = strlen(cStyleString);

    // Output the length of the string
    std::cout << "The total length of the string is: " << length << std::endl;

    return 0;
}