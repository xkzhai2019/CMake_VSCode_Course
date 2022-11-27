#include "Gun.h"
#include "iostream"
using namespace std;

void Gun::addBullet(int bullet_number){
    this->_bullet_count += bullet_number;
}

bool Gun::shoot(){
    if (this->_bullet_count<=0)
    {
        cout << "there is no bullet!" << endl;
        return false;
    }

    this->_bullet_count -= 1;
    cout << "shoot success"<<endl;
    return true;
}