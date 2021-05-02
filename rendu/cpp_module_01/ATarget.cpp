#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget(std::string const & type) : m_type(type) {
}

ATarget::ATarget(ATarget const & src) : m_type(src.m_type) {
}

ATarget &	ATarget::operator=(ATarget const & rhs) {
	if (this != &rhs) {
		m_type = rhs.m_type;
	}
	return *this;
}

ATarget::~ATarget() {
}

std::string const &	ATarget::getType() const {
	return m_type;
}

void	ATarget::getHitBySpell(ASpell const & spell) const {
	std::cout << m_type << " has been " << spell.getEffects() << "!\n";
}
