#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string t):
	type(t) {
}

ATarget::ATarget(const ATarget& src):
	type(src.type) {
}

ATarget& ATarget::operator=(const ATarget& src) {
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

ATarget::~ATarget() {
}

const std::string&	ATarget::getType() const {
	return type;
}

void				ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
