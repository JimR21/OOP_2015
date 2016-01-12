#include "List.hpp"
#include <string>
#include <string.h>

using namespace std;

List::List(unsigned elsize)
{
    start = NULL;
    end = NULL;
    it = NULL;
    size = 0;
    elementSize = elsize;
}

List::~List()
{

}

void List::append(void *data)
{
    Node* newnode = new Node();
    newnode->data = malloc(elementSize);

    memcpy(newnode->data, data, elementSize);

    if(size == 0)
    {
        start = end = newnode;
    }
    else
    {
        end->next = newnode;
        end = newnode;
    }

    size++;
}

void List::popLast()
{

}

void* List::first()
{
    return start->data;
}

void* List::last()
{
    return end->data;
}
