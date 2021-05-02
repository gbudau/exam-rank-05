#pragma once
#include <string>

class Warlock {
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void	setTitle(std::string const & title);
		void	introduce() const;

	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock &	operator=(Warlock const & rhs);
		std::string	m_name;
		std::string	m_title;
};
