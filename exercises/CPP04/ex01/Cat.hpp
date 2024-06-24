#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*_own_brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		virtual ~Cat();


		virtual void	makeSound() const;
		std::string		getIdea(int idea_nbr) const;
		void			setIdea(int idea_nbr, std::string idea);
};

#endif