#include "Director.h"



void Director::SetBuilder(ConcretePCBuilder* builder)
{
	this->builder = builder;
}

void Director::BuildPCMininumRequirements()
{
	builder->produceCPUCases("Generic case");
	builder->produceGraphics("Basic HDGraphics card 512MB");
	builder->produceProcessors("Basic 5th generation processor");
}

void Director::BuildPCMaximumRequirements()
{
	builder->produceCPUCases("");
	builder->produceGraphics("Ultimate graphics waowaoawwaowoaowa");
	builder->produceKeyboard("Ultimate keyboard with extra leds :o");
	builder->produceMonitors("Ultimate monitor and curve display D:");
	builder->produceMouses("Ultimate Mouse with extra dpi D:");
	builder->produceProcessors("Ultimate procesor with quantum functions :d");
}

