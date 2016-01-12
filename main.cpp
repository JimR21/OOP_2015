#include "Forum.hpp"
#include "List.hpp"
#include <iostream>

using namespace std;

int main()
{
    List* numbers = new List(sizeof(int));

    int i = 34;
    numbers->append(&i);
    cout << *(int*)numbers->first() << endl;
}
