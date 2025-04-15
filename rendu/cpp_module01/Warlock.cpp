#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(std::string n, std::string t): name(n), title(t) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::map<std::string, ASpell*>::iterator it;
	for (it = spellbook.begin(); it != spellbook.end(); ++it) {
		delete it->second;
	}
	spellbook.clear();
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName() const { return name; }

const std::string&	Warlock::getTitle() const { return title; }

void	Warlock::setTitle(const std::string& t) {
	title = t;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	if (spell && spellbook.find(spell->getName()) == spellbook.end())
		spellbook[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string name) {
	std::map<std::string, ASpell*>::iterator it = spellbook.find(name);
	if (it != spellbook.end()) {
		delete it->second;
		spellbook.erase(it);
	}
}

void	Warlock::launchSpell(std::string name, ATarget& target) {
	if (spellbook.find(name) != spellbook.end())
		spellbook.find(name)->second->launch(target);
}
