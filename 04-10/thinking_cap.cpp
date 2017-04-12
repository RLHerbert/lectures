//thinking_cap.cpp

#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

class thinking_cap{
    public:
        thinking_cap();
        thinking_cap(char ng[], char nr[]);
        void slots(char new_green[], char new_red[]);
        void push_green() const; //printed out the green string
        void push_red()const; //printed out the red string

    private:
        char green_string[50];
        char red_string[50];
};
thinking_cap::thinking_cap(){
    char ng[]="Green", nr[]="Red";
    slots(ng, nr);
}

thinking_cap::thinking_cap(char ng[], char nr[]){
    slots(ng, nr);
}

 void thinking_cap::slots(char new_green[], char new_red[]){
     assert(strlen(new_green)<50);
     assert(strlen(new_red)<50);
     strcpy(green_string, new_green);
     strcpy(red_string, new_red);

 }

void thinking_cap::push_green() const{
    cout<<green_string<<endl;
}


void thinking_cap::push_red() const{
    cout<<red_string<<endl;
}

int main(){
    char s1[]="Hello", s2[]= "there";
    thinking_cap student(s1, s2);
    thinking_cap fan(student);
    fan.push_green();
    fan.push_red();
    return 0;
}

