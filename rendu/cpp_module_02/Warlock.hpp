#pragma once
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void	setTitle(std::string const & title);
		void	introduce() const;
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & name);
		void	launchSpell(std::string const & name, ATarget const & target);

	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
		std::string	m_name;
		std::string	m_title;
		SpellBook	m_spellbook;
};
