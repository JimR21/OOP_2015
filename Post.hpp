#ifndef POST_HPP
#define POST_HPP
#include <string>
#include "Date.hpp"

class Post
{
    unsigned id;
    unsigned title;
    unsigned creator;
    Date date;      // Creation Date
    std::string text;
};

#endif
