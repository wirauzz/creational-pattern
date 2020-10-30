#pragma once
#include "ConcretePCBuilder.h"

class Director
{
private:
	ConcretePCBuilder* builder;

public:
	void SetBuilder(ConcretePCBuilder* builder);
	void BuildPCMininumRequirements();
	void BuildPCMaximumRequirements();

};

