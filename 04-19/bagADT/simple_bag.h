// FILE: simple_bag.h
// CLASS PROVIDED: bag (part of the namespace main_savitch_simple_bag)
//
// CONSTRUCTOR for the bag class:
//   bag( )
//     Postcondition: The bag has been initialized as an empty bag.
//
// MODIFICATION MEMBER FUNCTIONS for the bag class:
//   void erase_one(const int& target)
//     Postcondition: If target was in the bag, then one copy has been removed;
//     otherwise the bag is unchanged. A true return value indicates that one
//     copy was removed; false indicates that nothing was removed.
//
//   void insert(const int& entry)
//     Precondition:  size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been added to the bag.
//
//
// CONSTANT MEMBER FUNCTIONS for the bag class:
//   unsigned int size( ) const
//     Postcondition: The return value is the total number of items in the bag.
//
//   unsigned int count(const int& target) const
//     Postcondition: The return value is number of times target is in the bag.
//
//
// VALUE SEMANTICS for the bag class:
//    Assignments and the copy constructor may be used with bag objects.

#ifndef SIMPLE_BAG_H
#define SIMPLE_BAG_H

#include <cstdlib>  // Provides size_t
#include <iostream>
#include <cassert>
using namespace std;
namespace main_savitch_4{
class bag
    { 
    public:
        // CONSTRUCTOR
        //static const unsigned int CAPACITY=30;
        static const unsigned int CAPACITY=30;
        bag(){ used = 0;} 
        // MODIFICATION MEMBER FUNCTIONS
        void insert(const int& entry);
        bool erase_one(const int& target);
        // CONSTANT MEMBER FUNCTIONS
        unsigned int size( ) const { return used; }
        unsigned int count(const int& target) const;
        void print_data()const;
    private:
        int data[CAPACITY];  // The array to store items
        unsigned int used;             // How much of array is used
};
}
#endif
