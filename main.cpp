#include <cstdlib>
#include <string>
#include <iostream>

#include "src/creationals/singleton/SingletonSun.h"
#include "src/creationals/factory/CoffeeMachine.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    CoffeeMachine* machine = new CoffeeMachine();
    machine->MakeCoffee("sugar");
    machine->MakeCoffee("no sugar");
    
    return 0;
}

