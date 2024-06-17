#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H

#include "Person.h"
#include <string>


namespace FlowerShop{
    class FlowerArranger : Person
    {
        public:
            FlowerArranger(std:: string name);
            void arrangeFlowers(FlowersBouquet*);
            std:: string getName() override;

    };
}

#endif
