// linkedlist.h
// Linked list header file 

#ifndef LINKEDLIST_H
#define LINKEDTLIST_H

template <class Item>
class LinkedList {

public:

    // ctor, dtor and 3 methods already done in intlist.cpp:
    LinkedList();              // constructor
    ~LinkedList();             // destructor
    void append(Item value); // append value at end of list
    void print() const;     // print values separate by ' '
    int count() const;      // return count of values

    //  METHODS YOU MUST IMPLEMENT IN intlist.cpp:
    Item sum() const;                 // sum of all values
    bool contains(Item value) const;  // true if value in list
    Item max() const;                 // maximum value
    void insertFirst(Item value);     // insert new first value

private:

    // definition of Node structure (DO NOT CHANGE):
    struct Node {
        Item info;
        Node *next;
    };

    Node *first; // pointer to first node
};
#include "linkedlist.template"
#endif
