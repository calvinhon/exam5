#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ASpell;

class Dummy: public ATarget {

	public:
		Dummy();
		Dummy(std::string t);
		Dummy(const Dummy& src);
		Dummy& operator=(const Dummy& src);
		~Dummy();
		Dummy*				clone() const ;

};

#endif