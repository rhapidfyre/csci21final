#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip() {
    name_ = "RS Cloaky";
    fuel_ = 1000;
    cloaked_ = false;
}

void SpecialRocketShip::setCloaked(bool cloaked) {
    cloaked_ = cloaked;
}

bool SpecialRocketShip::getCloaked() const {
    return cloaked_;
}
