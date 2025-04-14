#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include <iostream>

class Fwoosh {

	public:
		Fwoosh();
		Fwoosh(std::string n, std::string e);
		Fwoosh(const Fwoosh& src);
		Fwoosh& operator=(const Fwoosh& src);
		~Fwoosh();
		const std::string&	getName() const;
		const std::string&	getEffects() const;
		Fwoosh*				clone() const;
		void				launch(const ATarget& target);
	
	protected:
		std::string name;
		std::string effects;
};

#endif