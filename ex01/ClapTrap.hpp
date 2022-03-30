#pragma once

#include <string>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& that);
    virtual ~ClapTrap();

    void swap(ClapTrap& that);

    ClapTrap& operator=(ClapTrap that);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    const std::string& getName() const;

    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    void setName(const std::string& value);

    void setHitPoints(unsigned int value);
    void setEnergyPoints(unsigned int value);
    void setAttackDamage(unsigned int value);

    static const int HIT_POINTS = 10;
    static const int ENERGY_POINTS = 10;
    static const int ATTACK_DAMAGE = 0;

private:
    std::string name;

    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

    static void swapInts(unsigned int& a, unsigned int& b);
};
