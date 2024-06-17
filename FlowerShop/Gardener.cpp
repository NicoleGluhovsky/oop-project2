#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>
#include "Person.h"

namespace FlowerShop{
    class Gardener{
        public:
            Gardener(std:: string name) : Person(name){}
            FlowersBouquet* PrepareBouquet(std:: vector<std::string> flowers){
                std::cout << this->getName() << " prepares flowers." << std::endl;
                return new FlowersBouquet(flowers);
            }

            std:: string getName() override{
                return "Gardener " + Person:: getName();
            }
        
    };
}