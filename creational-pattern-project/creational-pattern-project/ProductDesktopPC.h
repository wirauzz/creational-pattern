#pragma once
#include <iostream>
#include <string>
using namespace std;

class ProductDesktopPC
{
private:
	string MonitorBrand;
	string ProcessorBrand;
	string CPUCaseBrand;
	string GraphicsCardBrand;
	string MouseBrand;
	string KeyboardBrand;

public:
	string getMonitorBrand();
	string getProcessorBrand();
	string getCPUCaseBrand();
	string getGraphicsBrand();
	string getMouseBrand();
	string getKeyboardBrand();

	void setMonitorBrand(string Brand);
	void setProcessorBrand(string Brand);
	void setCPUCaseBrand(string Brand);
	void setGraphicsBrand(string Brand);
	void setMouseBrand(string Brand);
	void setKeyboardBrand(string Brand);
	void showPC();

};

