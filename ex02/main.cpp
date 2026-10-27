#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    // Subject
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    // Mi test
    Array<std::string> words(3);
    words[0] = "Hola";
    words[1] = "Mundo";
    words[2] = "C++";

    std::cout << "\nTesting an array of strings (Size: " << words.size() << "):" << '\n';
    for (unsigned int i = 0; i < words.size(); i++)
    {
        std::cout << "words[" << i << "] = " << words[i] << '\n';
    }

    Array<std::string> copyWords(words);
    copyWords[0] = "Adios";

    std::cout << "\nChecking for deep copies:" << '\n';
    std::cout << "Original words[0]: " << words[0] << '\n';
    std::cout << "Copy copyWords[0]: " << copyWords[0] << '\n';
    return 0;
}
