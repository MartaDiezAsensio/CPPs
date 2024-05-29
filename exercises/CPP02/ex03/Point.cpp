
#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::Point(const Point &source): _x(source.getX()), _y(source.getY()) {}

Point &Point::operator=(const Point &source) {
	if (this != &source) {
		const_cast<Fixed&>(_x) + source.getX();
		const_cast<Fixed&>(_y) + source.getY();
	}
	return (*this);
}

Point::~Point() {}

const Fixed&	Point::getX() const {
	return	(_x);
}

const Fixed&	Point::getY() const {
	return	(_y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	bool	sign[3];

	sign[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())) > 0;
	sign[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())) > 0;
	sign[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())) > 0;

	return sign[0] == sign[1] && sign[1] == sign[2];
}
