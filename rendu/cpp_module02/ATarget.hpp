#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget {

	public:
		ATarget();
		ATarget(std::string t);
		ATarget(const ATarget& src);
		ATarget& operator=(const ATarget& src);
		virtual ~ATarget();
		const std::string&	getType() const;
		virtual ATarget*	clone() const = 0;
		void				getHitBySpell(const ASpell& spell) const;

	protected:
		std::string type;
};

#endif