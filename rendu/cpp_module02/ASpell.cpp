#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string n, std::string e): name(n), effects(e) {
}

ASpell::ASpell(const ASpell& src):
	name(src.name),
	effects(src.effects) {}

ASpell& ASpell::operator=(const ASpell& src) {
	if (this != &src) {
		name = src.name;
		effects = src.effects;
	}
	return *this;
}

ASpell::~ASpell() {
}

const std::string&	ASpell::getName() const { return name; }

const std::string&	ASpell::getEffects() const { return effects; }

void	ASpell::launch(const ATarget& t) {
	t.getHitBySpell(*this);
}
