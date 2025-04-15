#include "BrickWall.hpp"
#include "ASpell.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(std::string t): ATarget(t) {}

BrickWall::BrickWall(const BrickWall& src): ATarget(src) {}

BrickWall& BrickWall::operator=(const BrickWall& src) {
	if (this != &src)
		ATarget::operator=(src);
	return *this;
}

BrickWall::~BrickWall() {}

BrickWall*	BrickWall::clone() const {return new BrickWall();}
