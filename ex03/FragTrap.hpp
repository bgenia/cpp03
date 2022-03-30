#pragma once

#include <ClapTrap.hpp>

#include <string>

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& that);
    ~FragTrap();

    void highFiveGuys() const;

    static const int HIT_POINTS = 100;
    static const int ENERGY_POINTS = 100;
    static const int ATTACK_DAMAGE = 30;
};
