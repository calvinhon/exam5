#include "Warlock.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

Warlock::Warlock(std::string n, std::string t):
	name(n),
	title(t) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName() const {
	return name;
}

const std::string&	Warlock::getTitle() const {
	return title;
}

void Warlock::setTitle(const std::string& t) {
	title = t;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell){
	book.learnSpell(spell);	
}

void	Warlock::forgetSpell(std::string name){
	book.forgetSpell(name);
}

void	Warlock::launchSpell(std::string name, const ATarget& target){
	ASpell *spell = book.createSpell(name);
	if (spell)
		spell->launch(target);
}

