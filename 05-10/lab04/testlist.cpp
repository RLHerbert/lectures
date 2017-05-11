// testlist.cpp
// Tests intlist.cpp

#include "linkedlist.h"

#include <cstdlib> // provides atoi
#include <iostream>
using namespace std;

// creates two lists (one empty), and does simple tests of list methods
int main(int argc, char *argv[]) {
    typedef string value_type;
    LinkedList<value_type> list1, list2;
    value_type first , second , last ;
    value_type sum, true_sum;
    const int num_items =5;
    value_type items[num_items];
    cout<<"Enter "<<num_items<<" items separated by spaces"<<endl;
    for(int i=0; i< num_items; i++){
        cin>>items[i];
        if(i==0)
            true_sum= items[i];
        else
            true_sum+=items[i];
    }


        
    first = items[0];
    second = items[1];
    last = items[num_items-1];
    for (int i = 0; i < num_items; i++) {
        list1.append(items[i]);
    }

    // print and test methods for list1
    cout << "List 1: \n   ";
    list1.print();
    cout << endl << "   count: " << list1.count() << endl;
    sum = list1.sum();
    cout << "   sum: " << sum << " true sum : "<<true_sum<< endl;
    cout << "   contains " << first << " ? "
        << (list1.contains(first)? "yes" : "no") << endl;
    cout << "   contains " << second << " ? "
        << (list1.contains(second)? "yes" : "no") << endl;
    cout << "   contains " << last << " ? "
        << (list1.contains(last)? "yes" : "no") << endl;
    cout << "   contains " << sum << " ? "
        << (list1.contains(sum)? "yes" : "no") << endl;
    cout << "   max: " << list1.max() << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "   List after insertFirst(sum): \n   ";
    list1.insertFirst(sum);
    list1.print();
    cout << endl;

    // test methods for empty list2 (just need one contains test though)
    cout << "Empty list 2: \n   ";
    list2.print();
    cout << endl << "   count: " << list2.count() << endl;
    cout << "   sum: " << list2.sum() << endl;
    cout << "   max: " << list2.max() << endl;
    cout << "   List 2 after inserting items: "<<items[0]<<" "<<items[1]<<"\n   ";
    list2.insertFirst(items[0]);
    list2.insertFirst(items[1]);
    list2.print();
    cout << "   contains "<<items[1] <<"? "
        << (list2.contains(items[1])? "yes" : "no") << endl;
    cout << endl;


    return 0;
}
