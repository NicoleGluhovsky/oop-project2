#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H

#include <string>
#include <vector>

namespace FlowerShop{
    class FlowersBouquet
    {
        private:
            std::vector<std::string> bouquet;
            bool is_arranged;
        public:
            FlowersBouquet(std::vector<std::string>);
            void Arrange();
    };

}
#endif