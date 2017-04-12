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


    class point
    {
    public:
        // CONSTRUCTOR
        point(double initial_x = 0.0, double initial_y = 0.0);
        // MODIFICATION MEMBER FUNCTIONS
        void shift(double x_amount, double y_amount);
        void rotate90( );
        // CONSTANT MEMBER FUNCTIONS
        double get_x( ) const { return x; } 
        double get_y( ) const { return y; }
    private:
        double x; // x coordinate of this point
        double y; // y coordinate of this point
    };

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

