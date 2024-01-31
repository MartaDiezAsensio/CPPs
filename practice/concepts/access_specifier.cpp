// How the members (atributtes and methods) of a class can ve accessed.
//	public - members are accessible form outside the class
//	private - members cannot be accessed or viewed from outside the class
//	protected - members cannot be accessed from outside the class but the can be 
//	accessed in inherited classes.

#include <iostream>

class MyClass {
	public:
		int	x;
	private:
		int	y;
};

int	main() {
	MyClass	myObj;

	myObj.x = 25;
	//myObj.y = 30; // error, y is innaccesible
	
	return (0);
}