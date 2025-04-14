#include "Fwoosh.hpp"
#include "ATarget.hpp"

Fwoosh::Fwoosh() {}

Fwoosh::Fwoosh(std::string n, std::string t):
	name(n),
	effects(t) {
}

Fwoosh::Fwoosh(const Fwoosh& src):
	name(src.name),
	effects(src.effects) {

}

Fwoosh& Fwoosh::operator=(const Fwoosh& src) {
	if (this != &src) {
		name = src.name;
		effects = src.effects;
	}
	return *this;
}

Fwoosh::~Fwoosh() {
}

const std::string&	Fwoosh::getName() const {
	return name;
}

const std::string&	Fwoosh::getEffects() const {
	return effects;
}

void				Fwoosh::launch(const ATarget& target) {
	target.getHitBySpell();
}

Fwoosh*		clone() const {

}
