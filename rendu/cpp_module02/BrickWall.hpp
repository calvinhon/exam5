#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ASpell;

class BrickWall: public ATarget {

	public:
		BrickWall();
		BrickWall(std::string t);
		BrickWall(const BrickWall& src);
		BrickWall& operator=(const BrickWall& src);
		~BrickWall();
		BrickWall*				clone() const ;

};

#endif