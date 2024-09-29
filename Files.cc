#include "File.h"

// Constructor
File::File(string name, string content, Date& date) : name(name), content(content), lastModified(date) {
    // Initialization done using member initializer list
}

// Function to compare dates using Date::lessThan()
bool File::lessThan(File& otherFile) {
    return lastModified.lessThan(otherFile.lastModified);
}

// Print function to show file name and last modified date
void File::print() {
    cout << "File: " << name << " (Last Modified: ";
    lastModified.print();
    cout << ")" << endl;
}

// Print the file's metadata and its content
void File::printContents() {
    print();  // Print the file metadata (name and date)
    cout << "Content: " << endl << content << endl;  // Print the content of the file
}