#include <iostream>
#include <sstream>

class Student {
	private:
		std::string	fname;
		std::string	lname;
		int			age;
		int			standard;
	public:
		Student (std::string _fname, std::string _lname, int _age, int _standad) {
			fname = _fname;
			lname = _lname;
			age = _age;
			standard = _standad;
		}

		int	getAge() const {
			return (age);
		}
		void	setAge(int newAge) {
			age = newAge;
		}

		int	getStandard() const {
			return (standard);
		}
		void	setStandard(int newStandard) {
			standard = newStandard;
		}

		std::string	getFname() const {
			return (fname);
		}
		void	setFname(std::string newFname) {
			fname = newFname;
		}

		std::string	getLname() const {
			return (lname);
		}
		void	setLname(std::string newLname) {
			lname = newLname;
		}

		// std::string to_string() {
        //     std::stringstream ss;
        //     ss << age << "," << first_name << "," << last_name << "," << standard;
        //     return ss.str();
        // }
};