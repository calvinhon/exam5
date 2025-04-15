#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
	public:
		Warlock(std::string n, std::string t);
		~Warlock();

		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void	setTitle(const std::string& t);
		void introduce() const;

	private:
		Warlock(const Warlock& src);
		Warlock& operator=(const Warlock& src);

		std::string name;
		std::string title;
};

#endif