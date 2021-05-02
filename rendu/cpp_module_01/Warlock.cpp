#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(std::string const & name, std::string const & title) :
	m_name(name), m_title(title) {
	std::cout << m_name<< ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
	std::map<std::string, ASpell*>::iterator it = m_spells.begin();
	while (it != m_spells.end()) {
		delete it->second;
		it++;
	}
	std::cout << m_name << ": My job here is done!\n";
}

std::string const & Warlock::getName() const {
	return m_name;
}

std::string const & Warlock::getTitle() const {
	return m_title;
}

void	Warlock::setTitle(std::string const & title) {
	m_title = title;
}

void	Warlock::introduce() const {
	std::cout << m_name << ": I am " << m_name << ", " << m_title << "!\n";
}

void	Warlock::learnSpell(ASpell* spell) {
	if (spell && m_spells.count(spell->getName()) == 0) {
		m_spells[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string const & name) {
	if (m_spells.count(name)) {
		delete m_spells[name];
		m_spells.erase(name);
	}
}

void	Warlock::launchSpell(std::string const & name, ATarget const & target) {
	if (m_spells.count(name)) {
		m_spells[name]->launch(target);
	}
}
