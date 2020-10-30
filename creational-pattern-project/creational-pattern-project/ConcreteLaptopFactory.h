#pragma once
#include "LaptopFactory.h"
#include "ILaptop.h"
#include <string>
#include "Lenovo.h"
#include "HP.h"

class ConcreteLaptopFactory :public LaptopFactory
{
public:
	ILaptop* getConcreteLaptop(int LaptopType) const override {
		switch (LaptopType)
		{

		case 1:
			return new Lenovo();
			break;

		case 2:
			return new HP();
			break;

		default:
			break;
		}
	}
};
