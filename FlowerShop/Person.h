#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"


namespace FlowerShop
{
    class Florist;
    class Person
    {
        private:
            std::string name;
        public:
            Person(std::string name);
            virtual std::string getName();
            void OrderFlowers(Florist*, Person*, std::vector<std::string>);
            void AcceptFlowers(FlowersBouquet*);

    };
}


#endif