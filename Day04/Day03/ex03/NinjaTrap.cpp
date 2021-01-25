
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    this->_name = "Ninja-w0man";
    this->_armor_damage_reduction = 0;
    this->_energy_points = 120;
    this->_hit_points = 60;
    this->_level = 1;
    this->_ranged_attack_damage = 5;
    this->_max_hit_points = 60;
    this->_melee_attack_damage = 60;
    this->_max_energy_points = 120;
    std::cout <<this->_name<< ":(NinjaTrap)" <<"I'm like a shadow, i'm like darkness.You don't see me ... i'm near .."  <<std::endl;
    return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	std::cout << "You will be afraid of me";
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor NinjaTrap destroyed" <<std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &src)
{
	this->_name = src._name;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	this->_energy_points = src._energy_points;
	this->_hit_points = src._hit_points;
	this->_level = src._level;
	this->_ranged_attack_damage = src._ranged_attack_damage;
	this->_max_hit_points = src._max_hit_points;
	this->_melee_attack_damage = src._melee_attack_damage;
	this->_max_energy_points = src._max_energy_points;
	return *this;
}
void NinjaTrap::ninjaShoebox(ClapTrap const & ClapTrap)
{
	std::cout << this->_name << ":(NinjaTrap)" << "it's the powerest " << ClapTrap.getName() << "'s attack" <<std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & ScavTrap)
{
	std::cout << this->_name << ":(NinjaTrap)" << "it's the powerest " << ScavTrap.getName() << "'s attack" <<std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & FragTrap)
{
	std::cout << this->_name << ":(NinjaTrap)" << "it's the powerest " << FragTrap.getName() << "'s attack" <<std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & NinjaTrap)
{
	std::cout << this->_name << ":(NinjaTrap)" << "it's the powerest " << NinjaTrap.getName() << "'s attack" <<std::endl;
}

void 		NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_ranged_attack_damage <= 0)
		std::cout <<this->_name<< ":(NinjaTrap)" << "i forgot my shurikens. " << std::endl;
	else if (this->_energy_points - this->_ranged_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(NinjaTrap)" << "Ьy shurikens will hurt you" << std::endl;
		this->_energy_points -= this->_ranged_attack_damage;
	}
	this->get_info("rangedAttack", target);
}

void 		NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_melee_attack_damage <= 0)
		std::cout<<this->_name<< ":(NinjaTrap)" << "My saber was broken!" << std::endl;
	else if (this->_energy_points - this->_melee_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(NinjaTrap)" << "My saber will pierce your body very quicklyю Yщг won't even notice" << std::endl;
		this->_energy_points -= this->_melee_attack_damage;
	}
	this->get_info("meleeAttack", target);
}