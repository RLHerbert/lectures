// FILE: array.cxx
// A demonstration program for a template function called index_of_maximal.

#include <cstdlib>   // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout
#include <string>    // Provides string class
using namespace std;

Item maximal(Item a, Item b)
// Postcondition: Returns the larger of a and b.
// Note: Item may be any of the C++ built-in types (int, char, etc.), or a
// class with the > operator and a copy constructor.
{
    if (a > b)
        return a;
    else
        return b;
}

int main( )
{
    string s1("frijoles");
    string s2("beans");

    cout << "Larger of frijoles and beans: " << maximal(s1, s2) << endl;
//    cout << "Larger of 10 and 20 : " << maximal(10, 20) << endl;
    cout << "It's a large world." << endl;

    return EXIT_SUCCESS;
}
