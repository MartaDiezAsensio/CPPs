
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
	bool	ret = false;

	if ((a.getY() == b.getY() && a.getY() == point.getY()) || (a.getY() == c.getY() && a.getY() == point.getY()) || \
		(b.getY() == c.getY() && b.getY() == point.getY()) || (b.getX() == c.getX() && b.getX() == point.getX()) || \
		(a.getX() == b.getX() && a.getX() == point.getX()) || (a.getX() == c.getX() && a.getX() == point.getX()))
			return (false);
	if (a.getY() > point.getY() != b.getY() > point.getY()) {
		if ((a.getX() - b.getX()) * (point.getY() - b.getY())
		 / (a.getY() - b.getY()) + b.getX() > point.getX())
		 	ret = true;
	}
	if (a.getY() > point.getY() != c.getY() > point.getY()) {
		if ((a.getX() - c.getX()) * (point.getY() - c.getY())
		/ (a.getY() - c.getY()) + c.getX() > point.getX()) {
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if (b.getY() > point.getY() != c.getY() > point.getY()) {
		if ((b.getX() - c.getX()) * (point.getY() - c.getY())
		/ (b.getY() - c.getY()) + c.getX() > point.getX()) {
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}

	return (ret);
}
