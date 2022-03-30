#include <DiamondTrap.hpp>

#include <logutils.hpp>

DiamondTrap::DiamondTrap()
    : ClapTrap("Стас (клон)_clap_name"), name("Стас (клон)")
{
    LOG_CTOR_A(name);
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), name(name)
{
    LOG_CTOR_A(name);
    setHitPoints(HIT_POINTS);
    setEnergyPoints(ENERGY_POINTS);
    setAttackDamage(ATTACK_DAMAGE);
}

DiamondTrap::DiamondTrap(const DiamondTrap& that)
    : ClapTrap(that), ScavTrap(that), FragTrap(that), name(that.name)
{
    LOG_COPY_CTOR_A(name);
}

DiamondTrap::~DiamondTrap()
{
    LOG_DTOR_A(name);
}

void DiamondTrap::swap(DiamondTrap& that)
{
    LOG_METHOD_A(name << " <-> " << that.name);
    ClapTrap::swap(that);
    name.swap(that.name);
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap that)
{
    LOG_COPY_ASGN_A(name << " = " << that.name);
    swap(that);
    return *this;
}

void DiamondTrap::whoAmI() const
{
    LOG_METHOD_A(name << " (" << getName() << ")");
}
