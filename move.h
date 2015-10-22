class Move
{
private:
double x;
double y;
public:
Move(double a, double b);// sets x, y to a, b
Move ();
void showmove() const;
double get_x();
double get_y();
// shows current x, y values
Move add(const Move & m) const;
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
void reset(); // resets x,y to a, b
};