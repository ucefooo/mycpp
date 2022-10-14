#include "ScavTrap.hpp"

int main()
{
    ClapTrap ko("apah");
    ko.ShowHea();
    ScavTrap po("khtak");
    po.ShowHea();
    po.takeDamage(30);
    po.ShowHea();
    po.attack("ferda");
    po.ShowHea();
    po.guardGate();
}