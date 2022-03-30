#include <ScavTrap.hpp>

#include <logutils.hpp>

ScavTrap::ScavTrap()
{
    LOG_CTOR_A(getName());
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    LOG_CTOR_A(getName());
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

ScavTrap::ScavTrap(const ScavTrap& that)
    : ClapTrap(that.getName())
{
    LOG_COPY_CTOR_A(getName());
    setHitPoints(that.getHitPoints());
    setEnergyPoints(that.getEnergyPoints());
    setAttackDamage(that.getAttackDamage());
}

ScavTrap::~ScavTrap()
{
    LOG_DTOR_A(getName());
}

void ScavTrap::attack(const std::string& target)
{
    LOG_METHOD_A(getName() << " -> " << target << " (" << getAttackDamage() << ")");

    ClapTrap::attack(target);
}

void ScavTrap::guardGate() const
{
    LOG_METHOD_A(getName());
}
