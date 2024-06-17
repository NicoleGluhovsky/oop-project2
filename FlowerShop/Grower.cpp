#include "Grower.h"
#include <iostream>
#include "Gardener.h"
#include "FlowersBouquet.h"
#include "Person.h"

namespace FlowerShop{
    class Grower : Person{
        private :
            Gardener* gardener;
        public:
            Grower(std:: string name, Gardener* gardener) : Person(name){
                this->gardener = gardener;
            }
            FlowersBouquet* PrepareOrder(std::vector<std::string> flowers){
                std::cout << this->getName() << " forwards the request to "+gardener->getName() << "." << std::endl;
                FlowersBouquet* bouquet = gardener->PrepareBouquet(flowers);
                std::cout <<gardener->getName() << " returns flowers to "+this->getName() << "." << std::endl;
                return bouquet;
            }
            std:: string getName() override{
                return "Grower " + Person::getName();
            }   
            
    };
}