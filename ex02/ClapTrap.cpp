#include <ClapTrap.hpp>

#include <iostream>

#include <logutils.hpp>

ClapTrap::ClapTrap()
    : name("Стас (клон)"),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    LOG_CTOR_A(name);
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name),
      hitPoints(10),
      energyPoints(10),
      attackDamage(0)
{
    LOG_CTOR_A(name);
}

ClapTrap::ClapTrap(const ClapTrap& that)
    : name(that.name),
      hitPoints(that.hitPoints),
      energyPoints(that.energyPoints),
      attackDamage(that.attackDamage)
{
    LOG_COPY_CTOR_A(name);
}

ClapTrap::~ClapTrap()
{
    LOG_DTOR_A(name);
}

void ClapTrap::swap(ClapTrap& that)
{
    name.swap(that.name);
    swapInts(hitPoints, that.hitPoints);
    swapInts(energyPoints, that.energyPoints);
    swapInts(attackDamage, that.attackDamage);
}

ClapTrap& ClapTrap::operator=(ClapTrap that)
{
    swap(that);
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints == 0 || hitPoints == 0)
        return;

    energyPoints--;

    LOG_METHOD_A(name << " -> " << target << " (" << attackDamage << ")");
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
        return;

    hitPoints -= amount > hitPoints ? hitPoints : amount;

    LOG_METHOD_A(name << " <- (" << amount << ")" << " [" << hitPoints << "]");
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints == 0 || hitPoints == 0)
        return;

    energyPoints--;
    hitPoints += amount;

    LOG_METHOD_A(name << " <- (" << amount << ")" << " [" << hitPoints << "]");
}

const std::string& ClapTrap::getName() const
{
    return name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}

void ClapTrap::setName(const std::string& value)
{
    name = value;
}

void ClapTrap::setHitPoints(unsigned int value)
{
    hitPoints = value;
}

void ClapTrap::setEnergyPoints(unsigned int value)
{
    energyPoints = value;
}

void ClapTrap::setAttackDamage(unsigned int value)
{
    attackDamage = value;
}

void ClapTrap::swapInts(unsigned int& a, unsigned int& b)
{
    unsigned int temp = a;
    a = b;
    b = temp;
}
