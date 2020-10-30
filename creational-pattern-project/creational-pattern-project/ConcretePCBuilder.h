#pragma once
#include "DesktopPCBuilder.h"
#include "ProductDesktopPC.h"

class ConcretePCBuilder :	public DesktopPCBuilder
{
private:
    ProductDesktopPC* PC;
public:
    ConcretePCBuilder();
    void reset();
    void produceMonitors(string brandName) const override;
    void produceProcessors(string brandName) const override;
    void produceCPUCases(string brandName) const override;
    void produceGraphics(string brandName) const override;
    void produceMouses(string brandName) const override;
    void produceKeyboard(string brandName) const override;
    ProductDesktopPC* getProduct();
	~ConcretePCBuilder();
};

