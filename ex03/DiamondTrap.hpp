#pragma once

#include <string>

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& that);
    ~DiamondTrap();

    void swap(DiamondTrap& that);

    DiamondTrap& operator=(DiamondTrap that);

    using ScavTrap::attack;

    void whoAmI() const;

    static const int HIT_POINTS = FragTrap::HIT_POINTS;
    static const int ENERGY_POINTS = ScavTrap::ENERGY_POINTS;
    static const int ATTACK_DAMAGE = FragTrap::ATTACK_DAMAGE;

private:
    std::string name;
};
