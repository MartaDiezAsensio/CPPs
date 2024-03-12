
#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::Point(const Point &source): _x(source.getX()), _y(source.getY()) {}

Point &Point::operator=(const Point &source) {

}

Point::~Point() {

}

const Fixed	&getX() const {
	return	(_x);
}

const Fixed	&getY() const {
	return	(_y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

}