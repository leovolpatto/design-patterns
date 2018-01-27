#include <string>
#include "AbstractCoffee.cpp"
#include "SweetCoffee.cpp"
#include "SugarLessCoffee.cpp"

class CoffeeMachine {
public:

    AbstractCoffee* MakeCoffee(std::string option) {

        AbstractCoffee* coffee = NULL;

        if (option == "sugar")
            coffee = new SweetCoffee();

        if (option == "no sugar")
            coffee = new SugarLessCoffee();

        return coffee;
    }
};