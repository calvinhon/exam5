#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <map>

class ASpell;
class ATarget;

class Warlock {
	public:
		Warlock(std::string n, std::string t);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void	setTitle(const std::string& t);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget& target);

	private:
		Warlock();
		Warlock(const Warlock& src);
		Warlock& operator=(const Warlock& src);

		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spellbook;
};

#endif