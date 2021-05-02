#pragma once
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	public:
		ATarget(std::string const & type);
		ATarget(ATarget const & src);
		ATarget &	operator=(ATarget const & rhs);
		virtual	~ATarget();
		std::string const &	getType() const;
		virtual ATarget*	clone() const = 0;
		void	getHitBySpell(ASpell const & spell) const;

	protected:
		std::string	m_type;

	private:
		ATarget();
};
