#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell {

	public:
		Polymorph();
		Polymorph(std::string n, std::string e);
		Polymorph(const Polymorph& src);
		Polymorph& operator=(const Polymorph& src);
		~Polymorph();
		Polymorph*				clone() const ;
	
};

#endif