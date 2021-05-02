#pragma once
#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook {
	public:
		SpellBook();
		~SpellBook();
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & name);
		ASpell*	createSpell(std::string const & name);

	private:
		SpellBook(SpellBook const & src);
		SpellBook &	operator=(SpellBook const & rhs);
		std::map<std::string, ASpell*>	m_spells;
};
