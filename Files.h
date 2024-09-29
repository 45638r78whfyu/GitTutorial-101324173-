#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class File {
    public:
        // Constructor
        File(string name, string content, Date& date);

        // Other member functions
        bool lessThan(File& otherFile);
        void print();
        void printContents();

    private:
        // Member variables
        string name;
        string content;
        Date lastModified;
};

#endif