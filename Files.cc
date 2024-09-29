#include "File.h"
#include <iostream>

// Constructor implementation
File::File(const std::string& fileName, const std::string& fileContent, Date& date)
    : name(fileName), content(fileContent), lastModified(date) {}

// lessThan() compares the lastModified Date with another file's lastModified date
bool File::lessThan(File& otherFile) {
    return lastModified.lessThan(otherFile.lastModified);
}

// Print file name and last modified date
void File::print() {
    std::cout << "File: " << name << ", Last Modified: ";
    lastModified.print();
    std::cout << std::endl;
}

// Print file name, last modified date, and content
void File::printContents() {
    print(); // Call the print function to show metadata
    std::cout << "Content: " << content << std::endl;
}