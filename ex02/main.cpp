#include <ClapTrap.hpp>
#include <FragTrap.hpp>

int main()
{
    FragTrap a("Дима");
    FragTrap b("Стас");
    FragTrap c;

    b = c;

    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());

    a.beRepaired(10);

    c.attack(b.getName());
    b.takeDamage(c.getAttackDamage());

    a.highFiveGuys();
}
