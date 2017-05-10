#include <iostream>
#include <cstdlib>

using namespace std;

double Fib(int n){
    if(n<3) return 1;

    double *arr = new double[n];

    for( int i = 0; i<n;i++){
        arr[i]=0;
    }
    arr[0]= arr[1]= 1; 
    for(int i = 2; i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n-1];

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

