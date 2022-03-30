#include <FragTrap.hpp>

#include <logutils.hpp>

FragTrap::FragTrap()
{
    LOG_CTOR_A(getName());
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    LOG_CTOR_A(getName());
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

FragTrap::FragTrap(const FragTrap& that)
    : ClapTrap(that.getName())
{
    LOG_COPY_CTOR_A(getName());
    setHitPoints(that.getHitPoints());
    setEnergyPoints(that.getEnergyPoints());
    setAttackDamage(that.getAttackDamage());
}

FragTrap::~FragTrap()
{
    LOG_DTOR_A(getName());
}

void FragTrap::highFiveGuys() const
{
    LOG_METHOD_A(getName());
}
