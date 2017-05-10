// intlist.cpp
// Implements class LinkedList
// YOUR NAME(S), AND DATE

#include "linkedlist.h"

#include <iostream>
using std::cout;

// return sum of values in list
int LinkedList::sum() const {
    int sumElem=0;
    Node* p = first;
    if(p){
        sumElem= first->info;
        p=p->next;
    }
    while(p){
        sumElem+=p->info;
        p = p->next;
    }

    return sumElem; // REPLACE THIS NON-SOLUTION
}

// returns true if value is in the list; false if not
bool LinkedList::contains(int value) const {
    Node *p= first;
    
    while(p){
        if(p->info==value){
            return true;
        }
        p = p->next;
    }
    return false; // REPLACE THIS NON-SOLUTION
}

// returns maximum value in list, or 0 if empty list
int LinkedList::max() const {
    int maxElem=0;
    Node* p = first;
    if(p){
        maxElem= first->info;
        p=p->next;
    }
    while(p){
        if(p->info> maxElem){
            maxElem=p->info;
        }
        p = p->next;
    }
    return maxElem; // REPLACE THIS NON-SOLUTION
    
}


// inserts value as new node at beginning of list
void LinkedList::insertFirst(int value) {
    Node *p = new Node;
    p->info = value;
    p->next = first;
    first = p;

    // IMPLEMENT
}

// DO NOT CHANGE ANYTHING BELOW (READ IT THOUGH)

// constructor sets up empty list
LinkedList::LinkedList() : first(0) { }

// destructor deletes all nodes
LinkedList::~LinkedList() {
    Node * dt;
    while(first){
        dt=first;
        first= first->next;
        delete dt;
    }
}

// append value at end of list
void LinkedList::append(int value) {
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
// return count of values
int LinkedList::count() const {
    int result = 0;
    for(Node *p = first; p!=0; p=p->next){
        result++;
    }
    return result;
}

// print values enclose in [], separated by spaces
void LinkedList::print() const {
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

