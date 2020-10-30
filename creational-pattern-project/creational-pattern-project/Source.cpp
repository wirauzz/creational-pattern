#include <iostream>
#include "ConcreteLaptopFactory.h"
#include "Director.h"
#include "ConcretePCBuilder.h"
#include "ProductDesktopPC.h"
using namespace std;



int main() 
{

  
    Director* director = new Director();
    ConcretePCBuilder* builder = new ConcretePCBuilder();
    director->SetBuilder(builder);
    director->BuildPCMaximumRequirements();
    ProductDesktopPC* PC = builder->getProduct();

    PC->showPC();

    director->BuildPCMininumRequirements();
    ProductDesktopPC* PC2 = builder->getProduct();
    
    PC2->showPC();

    builder->produceKeyboard("Uuuuuuultimate keyboard");
    builder->produceGraphics("Uuuuuuultimate graphcis");
    builder->produceProcessors("Quuuaaaantum processor");
    ProductDesktopPC* CustomPC = builder->getProduct();
    CustomPC->showPC();

    ConcreteLaptopFactory* laptop1 = new ConcreteLaptopFactory();
    laptop1->getConcreteLaptop(2)->computerDescription();

    ConcreteLaptopFactory* laptop2 = new ConcreteLaptopFactory();
    laptop2->getConcreteLaptop(1)->computerDescription();
    return 0;
}