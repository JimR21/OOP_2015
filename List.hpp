#ifndef LIST_HPP
#define LIST_HPP
#include "Node.hpp"
#include <stdlib.h>

class List
{
    Node* start;
    Node* end;
    unsigned size;  // List size
    unsigned elementSize;   // Element Size (Need it for malloc)

public:
    List(unsigned size);

    ~List();

    void append(void* data);  // add data at the end

    void popLast();   // removes last

    void* first();    // returns first and moves the iterator

    void* last();     // returns last and moves the iterator

    void* next();     // returns next and moves the iterator

    void* prev();     // returns prev and moves the iterator
};


#endif
