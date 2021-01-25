#ifndef POWERFIST_H
#define POWERFIST_H
	
#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:
public:
								PowerFist();
	virtual							~PowerFist();
								PowerFist(PowerFist const & src);
	PowerFist &					operator=(PowerFist const &src);
	void      					attack(void) const;
};

#endif