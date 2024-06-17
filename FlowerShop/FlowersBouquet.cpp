#include "FlowersBouquet.h"

namespace FlowerShop{
    class FlowersBouquet{
        private:
            std::vector<std::string> bouquet;
            bool is_arranged;
        public:
            FlowersBouquet(std::vector<std::string> flowers){
                bouquet = flowers;
                is_arranged = false;
            }
            void Arrange(){
                is_arranged = true;
            }
    };
}