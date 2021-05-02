#include "ASpell.hpp"

ASpell::ASpell(std::string const & name, std::string const & effects) :
	m_name(name), m_effects(effects) {
}

ASpell::ASpell(ASpell const & src) :
	m_name(src.m_name), m_effects(src.m_effects) {
}

ASpell &	ASpell::operator=(ASpell const & rhs) {
	if (this != &rhs) {
		m_name = rhs.m_name;
		m_effects = rhs.m_effects;
	}
	return *this;
}

ASpell::~ASpell() {
}

std::string const &	ASpell::getName() const {
	return m_name;
}

std::string const & ASpell::getEffects() const {
	return m_effects;
}

void	ASpell::launch(ATarget const & target) const {
	target.getHitBySpell(*this);
}
