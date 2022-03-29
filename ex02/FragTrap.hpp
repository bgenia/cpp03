#pragma once

#include <ClapTrap.hpp>

#include <string>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& that);
    ~FragTrap();

    void highFiveGuys() const;
};
