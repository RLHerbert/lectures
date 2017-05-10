#include <iostream>
#include <cstdlib>

using namespace std;

double Fib(int n){
   if(n == 1) return 1;
   if(n == 2) return 1;
   return Fib(n-1) + Fib(n-2);

}

int main(int argc, char *argv[]){
    if(argc != 2){
        cerr<<"Usage : "<<argv[0] <<" number"<<endl;
        exit(1);
     }

     int n = atoi(argv[1]);
     int i=n;

     for(i=1; i<= n; i++){
      cout<<" The fibonacci value of term "<<i << " is: " <<Fib(i)<<endl;
     }
}

