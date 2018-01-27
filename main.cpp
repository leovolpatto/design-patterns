#include <cstdlib>

#include "src/creationals/singleton/SingletonSun.h"

using namespace std;

int main(int argc, char** argv) {
    
    SingletonSun::getInstance()->Hide();
    SingletonSun::getInstance()->Show();
    
    return 0;
}

