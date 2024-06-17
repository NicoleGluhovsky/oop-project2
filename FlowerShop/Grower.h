#ifndef GROWER_H
#define GROWER_H

#include <string>
#include <vector>
#include "Person.h"
#include "Gardener.h"
#include "FlowersBouquet.h"

namespace FlowerShop{
    class Grower : Person
    {
        private:
            Gardener* gardener;
        public:
            Grower(std:: string name, Gardener* gardener);
            FlowersBouquet* PrepareOrder(std::vector<std::string>);
            std::string getName() override;
    };
}

#endif