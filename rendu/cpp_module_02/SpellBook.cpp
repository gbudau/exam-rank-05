#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it = m_spells.begin();
	while (it != m_spells.end()) {
		delete it->second;
		it++;
	}
}

void	SpellBook::learnSpell(ASpell* spell) {
	if (spell && m_spells.count(spell->getName()) == 0) {
		m_spells[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string const & name) {
	if (m_spells.count(name)) {
		delete m_spells[name];
		m_spells.erase(name);
	}
}

ASpell*	SpellBook::createSpell(std::string const & name) {
	if (m_spells.count(name)) {
		return m_spells[name]->clone();
	}
	return 0;
}
