#include "ClapTrap.hpp"

int main()
{
    ClapTrap po("Yuos");
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.takeDamage(2);
    po.ShowHea();
    po.beRepaired(3);
    po.ShowHea();
}