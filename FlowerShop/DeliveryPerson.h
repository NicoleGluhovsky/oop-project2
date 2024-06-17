#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"
#include "Person.h"

namespace FlowerShop{
    class DeliveryPerson : Person
    {
        public:
            DeliveryPerson(std::string name);   
            void Deliver(Person*, FlowersBouquet*);
            std:: string getName() override;
    };
}
#endif