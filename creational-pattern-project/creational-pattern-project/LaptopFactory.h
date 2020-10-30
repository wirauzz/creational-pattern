#pragma once
#include "ILaptop.h"

class LaptopFactory
{
public:
	virtual ~LaptopFactory(){};
	virtual ILaptop* getConcreteLaptop(int LaptopType) const = 0;
};