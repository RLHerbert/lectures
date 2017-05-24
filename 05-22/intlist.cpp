// intlist.cpp
// Implements class IntList
// YOUR NAME(S), AND DATE

#include "intlist.h"

#include <iostream>
using std::cout;

// return sum of values in list
int IntList::sum() const {
    return sumHelper(first); // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the list; false if not
bool IntList::contains(int value) const {
    return containsHelper(first, value); // REPLACE THIS NON-SOLUTION
}

// returns maximum value in list, or 0 if empty list
int IntList::max() const {
    return maxHelper(first); // REPLACE THIS NON-SOLUTION
    
}

// returns average (arithmetic mean) of all values, or
// 0 if list is empty
double IntList::average() const {
    return 0.0; // REPLACE THIS NON-SOLUTION
}

// inserts value as new node at beginning of list
void IntList::insertFirst(int value) {
    // IMPLEMENT
}

// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// constructor sets up empty list
IntList::IntList() : first(0) { }

// destructor deletes all nodes
IntList::~IntList() {
    Node * dt;
    while(first){
        dt=first;
        first= first->next;
        delete dt;
    }
}

// append value at end of list
void IntList::append(int value) {
    Node *newNode = new Node;
    newNode->info = value;
    newNode->next = 0;
    if( first ==0){ //empty list
        first = newNode;
    }else{
        Node *p =first;
        while(p->next){
            p=p->next;
        } 
        p->next= newNode;
    }
        
}

int IntList::sumHelper(Node *head) const{
    if(head == 0)
        return 0;

    return head->info + sumHelper(head->next);
}
bool IntList::containsHelper(Node *head, int value) const{
        if(head == 0)
            return false;
        bool result = containsHelper(head->next, value);
        if(result)
            return true;
        if(head->info == value)
            return true;
        return false;
}
int IntList::maxHelper(Node *head) const{
    if(head == 0)
        return 0;
    if(head->next == 0)
        return head->info;
    int mymax = maxHelper(head->next);
    if(mymax > head->info)
        return mymax;
    return head->info;
}

int IntList::countHelper( Node * head) const{
    if(head == 0)
        return 0;
    
    return 1+countHelper(head->next);
}
// return count of values
int IntList::count() const {
    //Iterative
    /*int result = 0;
    for(Node *p = first; p!=0; p=p->next){
        result++;
    }
    return result;*/
    return countHelper(first);
}

// print values enclose in [], separated by spaces
void IntList::print() const {
    Node *n = first;
    cout << '[';
    while (n) {
        cout << n->info;
        if (n->next)
            cout << " ";
        n = n->next;
    }
    cout << ']';
}

