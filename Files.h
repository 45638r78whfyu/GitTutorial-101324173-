#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
public:
    // Constructor
    File(const std::string& name, const std::string& content, Date& date);

    // Function to compare if this file's date is less than another file's date
    bool lessThan(File& otherFile);

    // Print file's metadata (name and last modified date)
    void print();

    // Print file's metadata and contents
    void printContents();

private:
    std::string name;
    std::string content;
    Date lastModified;
};

#endif