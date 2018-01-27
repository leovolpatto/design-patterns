#include <iostream>
#include "SingletonSun.h"

static SingletonSun* instance = NULL;

SingletonSun::SingletonSun() {
    std::cout<<"This lonely sun will always be the same";
}

SingletonSun::SingletonSun(const SingletonSun& orig) {
}

SingletonSun::~SingletonSun() {
}

void SingletonSun::Show(){
    std::cout << "Good morning!";
}

void SingletonSun::Hide(){
    std::cout << "Hasta la vista, baby!";
}

SingletonSun* SingletonSun::getInstance(){
    if(instance == NULL){
        instance = new SingletonSun();
    }
    
    return instance;
}