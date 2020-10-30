#include "ProductDesktopPC.h"


string ProductDesktopPC::getMonitorBrand()
{
	return MonitorBrand;
}

string ProductDesktopPC::getProcessorBrand()
{
	return ProcessorBrand;
}

string ProductDesktopPC::getCPUCaseBrand()
{
	return CPUCaseBrand;
}

string ProductDesktopPC::getGraphicsBrand()
{
	return GraphicsCardBrand;
}

string ProductDesktopPC::getMouseBrand()
{
	return MouseBrand;
}

string ProductDesktopPC::getKeyboardBrand()
{
	return KeyboardBrand;
}

void  ProductDesktopPC::setMonitorBrand(string Brand)
{
	MonitorBrand = Brand;
}

void  ProductDesktopPC::setProcessorBrand(string Brand)
{
	ProcessorBrand = Brand;
}

void  ProductDesktopPC::setCPUCaseBrand(string Brand)
{
	CPUCaseBrand = Brand;
}

void  ProductDesktopPC::setGraphicsBrand(string Brand)
{
	GraphicsCardBrand = Brand;
}

void  ProductDesktopPC::setMouseBrand(string Brand)
{
	MouseBrand = Brand;
}

void  ProductDesktopPC::setKeyboardBrand(string Brand)
{
	KeyboardBrand = Brand;
}

void ProductDesktopPC::showPC()
{
	cout << "This is your PC:" << endl;
	cout << "Processor: " << ProcessorBrand << endl;
	cout << "Monitor: " << MonitorBrand << endl;
	cout << "CPU Case: " << CPUCaseBrand << endl;
	cout << "Graphics Card: " << GraphicsCardBrand << endl;
	cout << "Mouse: " << MouseBrand << endl;
	cout << "Keyboard: " << KeyboardBrand << endl;
	cout << endl;
}
