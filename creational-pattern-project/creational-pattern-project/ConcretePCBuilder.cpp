#include "ConcretePCBuilder.h"



ConcretePCBuilder::ConcretePCBuilder()
{
	this->reset();
}

void ConcretePCBuilder::reset()
{
	this->PC = new ProductDesktopPC();
}

void ConcretePCBuilder::produceMonitors(string brandName = "NoMonitor") const
{
	PC->setMonitorBrand(brandName);
}

void ConcretePCBuilder::produceProcessors(string brandName = "No processor") const
{
	PC->setProcessorBrand(brandName);
}

void ConcretePCBuilder::produceGraphics(string brandName = "No Graphics card") const
{
	PC->setGraphicsBrand(brandName);
}

void ConcretePCBuilder::produceMouses(string brandName = "No mouse") const
{
	PC->setMouseBrand(brandName);
}

void ConcretePCBuilder::produceKeyboard(string brandName = "No keyboard") const
{
	PC->setKeyboardBrand(brandName);
}


void ConcretePCBuilder::produceCPUCases(string brandName = "No CPU case") const
{
	PC->setCPUCaseBrand(brandName);
}

ProductDesktopPC* ConcretePCBuilder::getProduct()
{
	ProductDesktopPC* result = this->PC;
	this->reset();
	return result;
}

ConcretePCBuilder::~ConcretePCBuilder()
{
	delete PC;
}