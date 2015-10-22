#include "move.h"
#include <iostream>
using namespace std;
Move:: Move()
{
	x=0;
	y=0;
}
Move:: Move(double a, double b)
{
	x=a;
	y=b;
}// sets x, y to a, b
double Move::get_x()
{
	return x;

}
double Move::get_y()
{
	return y;
}
void Move:: showmove() const
{
	cout<<"The current x equals "<<x<<" and y equals"<<y;
	
}// shows current x, y values
Move Move::add(const Move & m) const
{
	Move l (m.get_x()+x, m.get_y()+y);
return l;
}
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
void Move::reset()
{
	x=0;
	y=0;
}// resets x,y to a, b