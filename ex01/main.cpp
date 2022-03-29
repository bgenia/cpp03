#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main()
{
    ScavTrap a("Дима");
    ScavTrap b("Стас");
    ScavTrap c;

    b = c;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    a.beRepaired(10);

    c.attack(b.getName());
    b.takeDamage(c.getAttackDamage());
}
