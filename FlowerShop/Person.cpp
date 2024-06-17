#include "Person.h"
#include "Florist.h"
#include <iostream>
#include <vector>
#include <string>
#include "FlowersBouquet.h"

namespace FlowerShop{

    class Person{
        private:
            std::string name;
        public:
            Person(std::string name){
                this->name = name;
            }
            std::string getName(){
                return this->name;
            }
            void OrderFlowers(Florist* florist, Person* recipiant, std::vector<std::string> flowers){
                std:: cout << getName() << " orders flowers to " << recipiant->getName()+" from "+florist->getName() <<": " << flowers << "." << std:: endl;
                
                florist->AcceptOrder(recipiant, flowers);
            }
            void AcceptFlowers(FlowersBouquet* FlowersBouquet){
                std:: cout << this->getName() << " accepts the flowers: " << FlowersBouquet << std:: endl;
            }
    };
}