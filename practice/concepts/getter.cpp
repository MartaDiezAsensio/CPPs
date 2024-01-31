// Member function that gets the value of a private data member.
// It gives read permission to external code but does not allow to modify it.

// In this code, make ways of constructors are shown. 

#include <iostream>

class myClass {
	private:
		int			marks;
		std::string	name;
	public:
		//myClass(int marks, std::string name) : marks(marks), name(name) {}
		myClass(int _marks, std::string _name) {
			name = _name;
			marks = _marks;
		}

		int	getMarks() const {
			return (marks);
		}
};

//myClass::myClass(int marks, std::string name) : marks(marks), name(name) {}

int	main() {
	myClass myObj(3, "Name");

	int	marks = myObj.getMarks();

	std::cout << marks << std::endl;
}