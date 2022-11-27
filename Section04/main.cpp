#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test(){
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();

}

int main(){
    // int a = 0;
     std::cout << "this is a test string..."<<std::endl;
    std::cout << "this is a test string..."<<std::endl;
    test();
    return 0;
}