#pragma once
#include <string>
#include <map>
#include "ATarget.hpp"

#if 0
Make a TargetGenerator class, in canonical form, and as before,
non-copyable.

It will have the following functions:

* void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type
#endif

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();
		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const & type);
		ATarget*	createTarget(std::string const & type);

	private:
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &	operator=(TargetGenerator const & src);
		std::map<std::string, ATarget*>	m_targets;
};
