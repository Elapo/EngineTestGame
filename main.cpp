#include <iostream>
#include <Engine/Collidable.h>

int main() {//libEngine.dll needs to be added to exe
    Collision::Collidable c = Collision::Collidable();
    std::cout << c.veryDistinctFuntion() << std::endl;
    return 0;
}