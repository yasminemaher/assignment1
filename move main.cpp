
#include "move imp.cpp"
#include <iostream>
using namespace std;
void main ()
{
	Move point;
	point.showmove();
	Move m (10,10);
	point.add(m);
	point.showmove();
	point.reset();
	point.showmove();
}