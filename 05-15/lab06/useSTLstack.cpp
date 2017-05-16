// usestack.cpp - for CS 24 lab practice using stacks
// NAME(S), DATE

#include "intstack.h"
#include <iostream>
#include <stack>
using namespace std;

string reverse(string input){
    string result="";
    stack<char> s;
    for(int i=0; i< input.length();i++){
        s.push(input[i]);
        if( !isalpha(input[i])){
            throw string("String contains non-alphabet value");
        }
    }
    while(!s.empty()){
        result+= s.top();
        s.pop();
    }
    return result;


}

int main(int argc, char* argv[]) {

    cout<<"Original string : "<<argv[1]<<endl;
    try{
       cout<<"Reversed string : "<<reverse(argv[1])<<endl;
    }catch (string error){
       cerr<<"Error: "<<error<<endl;
    }

    return 0;
}
