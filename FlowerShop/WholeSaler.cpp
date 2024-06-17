#include "WholeSaler.h"
#include <iostream>
#include <vector>
#include <string>
#include "FlowersBouquet.h"
#include "Grower.h"
#include "Person.h"

namespace FlowerShop{
    class WholeSaler : Person
    {
        private:
            Grower* grower;
        public:
            WholeSaler(std :: string name, Grower* grower) : Person(name){
                this->grower = grower;
            }
            FlowersBouquet* acceptOrder(std :: vector <std :: string > flowers){
                std::cout << this->getName() + " forwards the request to "+ grower->getName() +".";
                FlowersBouquet* bouquet = grower->PrepareOrder(flowers);
                std::cout << grower->getName()+" returns flowers to "+this->getName() + "." << std::endl;
                return bouquet;
            }
            std::string getName() override{
                return "WholeSaler " + Person::getName();
            }

    };
}