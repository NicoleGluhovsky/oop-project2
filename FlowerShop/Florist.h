#ifndef FLORIST_H
#define FLORIST_H

#include "Person.h"
#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <string>


namespace FlowerShop{
    class Florist : Person
    {
        private:
            WholeSaler* wholeSaler;
            FlowerArranger* flowerArranger;
            DeliveryPerson* deliveryPerson;
        public:
            Florist(std:: string name, WholeSaler* Wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
            void AcceptOrder(Person*, std::vector<std::string>);
            std:: string getName() override;
    };
}
#endif