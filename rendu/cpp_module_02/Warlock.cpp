#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(std::string const & name, std::string const & title) :
	m_name(name), m_title(title) {
	std::cout << m_name<< ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
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
	m_spellbook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const & name) {
	m_spellbook.forgetSpell(name);
}

void	Warlock::launchSpell(std::string const & name, ATarget const & target) {
	ASpell*	spell = m_spellbook.createSpell(name);
	if (spell) {
		spell->launch(target);
		delete spell;
	}
}
