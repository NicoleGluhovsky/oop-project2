#ifndef WHOLESALER_H
#define WHOLESALER_H

#include "Grower.h"
#include <string>



namespace FlowerShop{
    class WholeSaler : Person
    {
        private:
            Grower* grower;
        public:
            WholeSaler(std :: string name, Grower* grower);
            FlowersBouquet* acceptOrder(std :: vector <std :: string >);
            std::string getName() override;

    };
}

#endif

