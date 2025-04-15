#include "Fwoosh.hpp"
#include "ATarget.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "Fwooshed") {}

Fwoosh::Fwoosh(std::string n, std::string t):
	ASpell(n, t) {
}

Fwoosh::Fwoosh(const Fwoosh& src):
	ASpell(src) {

}

Fwoosh& Fwoosh::operator=(const Fwoosh& src) {
	if (this != &src)
		ASpell::operator=(src);
	return *this;
}

Fwoosh::~Fwoosh() {
}

Fwoosh*		Fwoosh::clone() const {
	return new Fwoosh();
}
