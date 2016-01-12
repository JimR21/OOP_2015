#ifndef FORUM_HPP
#define FORUM_HPP
#include <string>
#include "List.hpp"

class Forum
{
private:
    std::string title;
    List* threads;

public:
    Forum(std::string ititle);

};




#endif
