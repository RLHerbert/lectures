// CLASS PROVIDED: point 
//
// CONSTRUCTOR for the point class:
//   point(double initial_x = 0.0, double initial_y = 0.0)
//     Postcondition: The point has been set to (initial_x, initial_y).
//
// MODIFICATION MEMBER FUNCTIONS for the point class:
//   void shift(double x_amount, double y_amount)
//     Postcondition: The point has been moved by x_amount along the x axis
//     and by y_amount along the y axis.
//
//   void rotate90( )
//     Postcondition: The point has been rotated clockwise 90 degrees around
//     the origin.
//
// CONSTANT MEMBER FUNCTIONS for the point class:
//   double get_x( ) const
//     Postcondition: The value returned is the x coordinate of the point.
//
//   double get_y( ) const
//     Postcondition: The value returned is the y coordinate of the point.
//
// VALUE SEMANTICS for the point class:
//    Assignments and the copy constructor may be used with point objects.

#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

namespace point_diba{
    class point
    {
    public:
        // CONSTRUCTOR
        point(double initial_x = 0.0, double initial_y = 0.0);
        // MODIFICATION MEMBER FUNCTIONS
        void shift(double x_amount, double y_amount);
        void rotate90( );
        // CONSTANT MEMBER FUNCTIONS
        double get_x( ) const { return x; } //Inline implementation of get_x()
        double get_y( ) const { return y; } //Inline implementation of get_y()
        friend void operator >>(istream &in, point& q);
    private:
        double x; // x coordinate of this point
        double y; // y coordinate of this point
    };
//NON MEMBER FUNCTION
double distance(const point& p1, const point& p2);


bool operator==(point p1, point p2);

point::point(double initial_x, double initial_y)
    {
        x = initial_x;   // Constructor sets the point to a given position.
        y = initial_y;
    }

    
    void point::shift(double x_amount, double y_amount)
    {
        x += x_amount;
        y += y_amount;   
    }

    
    void point::rotate90( )
    {
        double new_x;
        double new_y;

        new_x = y;  // For a 90 degree clockwise rotation, the new x is the original y,
        new_y = -x; // and the new y is -1 times the original x.
        x = new_x;
        y = new_y; 
    }

    double distance(const point& p1, const point& p2){
        /*if(p1 == p2){
            return 0.0;
        }
        */
        double diffx = p1.get_x() - p2.get_x();
        double diffy = p1.get_y() - p2.get_y();
        double result = sqrt(diffx*diffx +diffy*diffy);
        return result;
    }
    bool operator==(point p1, point p2){

        return (p1.get_x()== p2.get_x()) && 
               (p1.get_y() == p2.get_y());
    }

    void operator >>(istream &in, point& q){
        /*double xx, yy;
        cin>>xx>>yy;
        point p1(xx,yy);
        q=p1;*/
        cin>> q.x>>q.y;
        
    }
}
using namespace point_diba;

int main(){

    cout<<" Testing constructor with default values"<<endl;
    point p1;
    assert(p1.get_x()==0.0);
    assert(p1.get_y()==0.0);
    cout<<"PASSED"<<endl;

    
    cout<<" Testing distance function"<<endl;
    point p2(10,20);
    double result = point_diba::distance(p1, p2);
    assert(result > 22.36 && result <22.37);
    cout<<"PASSED"<<endl;


    cout<<"Testing overloaded input operator >>"<<endl;
    point p4,p5;
    cin>>p4>>p5;
    cout<<p4.get_x()<<" "<<p4.get_y()<<endl;








}
