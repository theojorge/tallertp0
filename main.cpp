#include <string>
#include <iostream>
#include <fstream>
#include "wordscounter.h"

#define SUCCESS 0

int main(int argc, char *argv[])
{
    Wordscounter *counter = new Wordscounter;
    std::ifstream *input = nullptr;
    if (argc > 1)
    {
        input = new std::ifstream(argv[1]);
        counter->process(*input);
    }
    else
    {
        counter->process(std::cin);
    }
    size_t words = counter->get_words();
    std::cout << words << std::endl;
    delete counter;
    delete input;
    return SUCCESS;
}
