#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget*>::iterator it = m_targets.begin();
	while (it != m_targets.end()) {
		delete it->second;
		it++;
	}
}

void	TargetGenerator::learnTargetType(ATarget* target) {
	if (target && m_targets.count(target->getType()) == 0) {
		m_targets[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string const & type) {
	if (m_targets.count(type)) {
		delete m_targets[type];
		m_targets.erase(type);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const & type) {
	if (m_targets.count(type)) {
		return m_targets[type]->clone();
	}
	return 0;
}
