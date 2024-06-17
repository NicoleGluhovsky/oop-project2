#include "FlowerArranger.h"
#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>

namespace FlowerShop{
    class FlowerArranger : Person
    {
        public:
            FlowerArranger(std:: string name) : Person(name){}
            void arrangeFlowers(FlowersBouquet* flowers){
                std:: cout << this->getName() << " arranges flowers." << std::endl;
                flowers->Arrange();
            }
            std:: string getName() override{
                return "Flower Arranger " + Person:: getName();
            }

    };
    
}