#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include "Person.h"
#include <iostream>

namespace FlowerShop {

    class DeliveryPerson : Person{
        public:
            DeliveryPerson(std::string name) : Person(name){}
            void DeliveryPerson::Deliver(Person* recipient, FlowersBouquet* bouquet) {
            std:: cout << this->getName() << " delivers flowers to " << recipient->getName() << std::endl;
            recipient->AcceptFlowers(bouquet);
            }

            std::string DeliveryPerson::getName() {
                return "Delivery Person " + Person::getName(); 
            }
    };
    
}
