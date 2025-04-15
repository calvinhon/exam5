#include "Fwoosh.hpp"
#include "ATarget.hpp"

Fwoosh::Fwoosh() {
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh::Fwoosh(std::string n, std::string e): ASpell(n, e) {
}

Fwoosh::Fwoosh(const Fwoosh& src): ASpell(src) {}

Fwoosh& Fwoosh::operator=(const Fwoosh& src) {
	if (this != &src) {
		ASpell::operator=(src);
	}
	return *this;
}

Fwoosh::~Fwoosh() {
}

Fwoosh* 	Fwoosh::clone() const {
	return new Fwoosh();
}
