// Setter is a member function that sets the value of a private data member.
// Allows controlled access to private members and can provide a constrain on
// the input or validation before a value is set.

#include <iostream>

class myClass {
	private:
		int			marks;
		std::string	name;
	public:
		myClass(int marks, std::string name) : marks(marks), name(name) {}

		void	setMarks(int newMarks){
			marks = newMarks;
		}

		int		getMarks() {
			return (marks);
		}
 };

 int	main()
 {
	myClass	myObj(3, "Me");
	myObj.setMarks(15);

	int	marks = myObj.getMarks();

	std::cout << marks << std::endl;
 }
