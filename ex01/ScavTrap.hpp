#include <ClapTrap.hpp>

#include <string>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& that);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate() const;
};
