#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

class ASpell {

	public:
		ASpell();
		ASpell(std::string n, std::string e);
		ASpell(const ASpell& src);
		ASpell& operator=(const ASpell& src);
		~ASpell();
		const std::string&	getName() const;
		const std::string&	getEffects() const;
		virtual ASpell*		clone() const = 0;
		void				launch(const ATarget& target);
	
	protected:
		std::string name;
		std::string effects;
};

#endif