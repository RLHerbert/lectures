//simple_bag_test.cpp
#include <cstdlib>  // Provides size_t
#include <iostream>
#include <cassert>
#include "simple_bag.h"
using namespace main_savitch_3;
int main(){
    bag b;
    cout<<"Insert 5 elements"<<endl;
    b.insert(10);
    b.insert(10);
    b.insert(10);
    b.insert(20);
    b.print_data();
    cout<<"Number of elements in bag : "<<b.size()<<endl;


    int i=20;
    cout<<"Number of occurrences of "<<i<<":  "<<b.count(i)<<endl;

    cout<<"Erase 10 and print elements"<<endl;
    b.erase_one(10);
    b.print_data();
    cout<<"Number of elements in bag : "<<b.size()<<endl;

    cout<<"Erase 20 and print elements"<<endl;
    b.erase_one(20);
    b.print_data();
    cout<<"Number of elements in bag : "<<b.size()<<endl;

    cout<<"Erase 10 and print elements"<<endl;
    b.erase_one(10);
    b.print_data();
    cout<<"Number of elements in bag : "<<b.size()<<endl;

    cout<<"Erase 10 and print elements"<<endl;
    b.erase_one(10);
    b.print_data();
    cout<<"Number of elements in bag : "<<b.size()<<endl;
    
}
