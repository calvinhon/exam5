#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell {
	public:
		Fwoosh();
		Fwoosh(std::string n, std::string e);
		Fwoosh(const Fwoosh& src);
		Fwoosh& operator=(const Fwoosh& src);
		~Fwoosh();

		virtual Fwoosh* 	clone() const;

};

#endif