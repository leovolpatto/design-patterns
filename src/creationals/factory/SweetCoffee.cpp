#include <iostream>

class SweetCoffee : public AbstractCoffee {
public:

    void getCoffeeType() {
        std::cout << "You took sweet coffee";
    }

};