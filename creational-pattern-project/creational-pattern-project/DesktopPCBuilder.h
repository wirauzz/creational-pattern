#pragma once
#include <iostream>
using namespace std;

class DesktopPCBuilder {
public:
    virtual ~DesktopPCBuilder() {}
    virtual void produceMonitors(string brandName) const = 0;
    virtual void produceProcessors(string brandName) const = 0;
    virtual void produceCPUCases(string brandName) const = 0;
    virtual void produceGraphics(string brandName) const = 0;
    virtual void produceMouses(string brandName) const = 0;
    virtual void produceKeyboard(string brandName) const = 0;
};