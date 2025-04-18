#include "Fireball.hpp"
#include "ATarget.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(std::string n, std::string t):
	ASpell(n, t) {
}

Fireball::Fireball(const Fireball& src):
	ASpell(src) {
}

Fireball& Fireball::operator=(const Fireball& src) {
	if (this != &src)
		ASpell::operator=(src);
	return *this;
}

Fireball::~Fireball() {
}

Fireball*		Fireball::clone() const {
	return new Fireball();
}
