#pragma once

#include <ClapTrap.hpp>

#include <string>

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& that);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate() const;

    static const int HIT_POINTS = 100;
    static const int ENERGY_POINTS = 50;
    static const int ATTACK_DAMAGE = 20;
};
