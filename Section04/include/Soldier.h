#pragma once

#include <string>
#include "Gun.h"

class Soldier{
    public:
        Soldier(std::string name);
        ~Soldier();
        void addBulletToGun(int num);
        bool fire();
        void addGun(Gun *ptr_gun);
    private:
        std::string _name;
        Gun* _ptr_gun;
};