#ifndef GARDENER_H
#define GARDENER_H

#include "Person.h"
#include <string>


namespace FlowerShop{
    class Gardener : Person
    {
        public:
            Gardener(std:: string name);
            FlowersBouquet* PrepareBouquet(std::vector<std::string>);
            std::string getName() override;
    };
}

#endif