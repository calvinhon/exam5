#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

class ATarget;

class ASpell {
	public:
		ASpell();
		ASpell(std::string n, std::string e);
		ASpell(const ASpell& src);
		ASpell& operator=(const ASpell& src);
		virtual ~ASpell();

		const std::string&	getName() const;
		const std::string&	getEffects() const;
		virtual ASpell* 	clone() const = 0;
		void	launch(const ATarget& t);

	protected:
		std::string name;
		std::string effects;
};

#endif