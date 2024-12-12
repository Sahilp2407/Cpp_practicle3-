#include <iostream>
#include <cstring> // Include the cstring header for strncpy

int main() {
    // Create a C-style string (character array)
    const char* cStyleString = "welcome to c++ program";

    // Define the length of the substring you want to extract
    size_t length = 7; // Length of "welcome"

    // Create a character array to hold the extracted substring
    char extractedString[8]; // 7 characters + 1 for the null terminator

    // Use strncpy to copy the substring
    strncpy(extractedString, cStyleString, length);

    // Null-terminate the extracted string
    extractedString[length] = '\0';

    // Output the extracted substring
    std::cout << "Extracted substring: " << extractedString << std::endl;

    return 0;
}