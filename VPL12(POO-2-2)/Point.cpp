#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
  // TODO: implement this operator.
  return out << p.getX() <<" "<<p.getY();
}

std::istream & operator >> (std::istream &in,  Point &p) {
  // TODO: implement this operator.
  in >> p.x >> p.y;
  return in;
}

Point Point::operator + (const Point &p) {
  // TODO: implement this operator.
  double xx = this->getX()+p.getX();
  double yy = this->getY()+p.getY();
  Point r(xx,yy);
  return r;
}

Point& Point::operator += (const Point &p) {
  // TODO: implement this operator.
  x = getX()+p.getX();
  y = getY()+p.getY();
  return *this;
}