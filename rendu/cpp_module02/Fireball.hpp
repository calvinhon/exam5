#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball: public ASpell {

	public:
		Fireball();
		Fireball(std::string n, std::string e);
		Fireball(const Fireball& src);
		Fireball& operator=(const Fireball& src);
		~Fireball();
		Fireball*				clone() const ;
	
};

#endif