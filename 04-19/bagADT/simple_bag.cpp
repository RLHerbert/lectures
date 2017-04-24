//simple_bag.cpp
#include <cstdlib>  // Provides size_t
#include <iostream>
#include <cassert>
#include "simple_bag.h"

using namespace std;
namespace main_savitch_4{
 const unsigned int bag::CAPACITY;

 void bag::insert(const int& entry){
    assert(used <CAPACITY);
    data[used++]=entry;
    return;
 }

 bool bag::erase_one(const int& target){
     unsigned int i =0;
     while(i<used){
         if(data[i]==target){
             data[i]=data[used-1];
             used--;
             return true;
         }
         i++;
     }
     return false;
 }

 unsigned int bag::count(const int& target) const{
    unsigned int num =0;
    for(unsigned int i=0;i<used;i++){
        if(data[i]==target)
            num++;
    }   
    return num;
 }

 void bag::print_data()const{
    for(unsigned int i=0;i<used; i++){
        cout<<"Element "<<i<<" is "<<data[i]<<endl;
    }
    cout<<endl;
 }
}

