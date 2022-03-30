#include <iostream>

#include <DiamondTrap.hpp>

int main()
{
    DiamondTrap a("Дима");
    DiamondTrap b("Стас");
    DiamondTrap c;

    std::cout
        << c.getHitPoints() << " / "
        << c.getEnergyPoints() << " / "
        << c.getAttackDamage() << std::endl;

    b = c;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    a.beRepaired(10);

    c.attack(b.getName());
    b.takeDamage(c.getAttackDamage());

    a.highFiveGuys();
    a.guardGate();

    a.whoAmI();
}
