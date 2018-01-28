#include <iostream>

class SugarLessCoffee : public AbstractCoffee {
public:

    void getCoffeeType() {
        std::cout << "You took no sugar coffee";
    }

};