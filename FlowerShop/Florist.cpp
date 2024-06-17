#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include <iostream>

// Ensure the correct namespace is used
namespace FlowerShop {

    class Florist : Person {
        private:
            WholeSaler* Wholesaler;
            FlowerArranger* flowerArranger;
            DeliveryPerson* deliveryPerson;
        public:
            Florist(std:: string name, WholeSaler* Wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name){
                this->Wholesaler = Wholesaler;
                this->flowerArranger = flowerArranger;
                this->deliveryPerson = deliveryPerson;
            }

            std::string Florist::getName() {
                return "Florist " + Person::getName();
            }
            void Florist::AcceptOrder(Person* recipient, std::vector<std::string> order){
                std:: cout << this->getName() << " forwards request to " << WholeSaler->getName() << "."<< std:: endl;
                FlowersBouquet* bouquet = Wholesaler->acceptOrder(order);
                std:: cout << WholeSaler->getName() << " returns flowers to " << this->getName() << "." << std::endl;
                std::cout<< this->getName() << " request flowers arrangement from " << flowerArranger->getName() << std::endl;
                flowerArranger->arrangeFlowers(bouquet);
                std::cout << flowerArranger->getName() << " returns arranged flowers to " << this->getName() << std::endl;
                std::cout << this->getName()+" forwards flowers to " << deliveryPerson->getName() << "." << std::endl; 
                deliveryPerson->Deliver(recipient, bouquet);
            }
    };
}
