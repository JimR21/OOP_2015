#ifndef NODE_HPP
#define NODE_HPP
#include <string>

class List;

class Node
{
    friend class List;
protected:
    void* data;
    Node* next;

public:
    Node();

    ~Node();
};

#endif
