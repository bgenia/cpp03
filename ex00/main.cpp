#include <ClapTrap.hpp>

int main()
{
    ClapTrap a("Дима");
    ClapTrap b("Стас");
    ClapTrap c;

    b = c;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    a.beRepaired(10);

    c.setAttackDamage(10);

    c.attack(b.getName());
    b.takeDamage(c.getAttackDamage());
}
