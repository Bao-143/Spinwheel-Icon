#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(SpinPlayer, PlayerObject) {
    void update(float dt) {
        PlayerObject::update(dt);

        if (auto icon = m_iconSprite) {
            icon->setRotation(icon->getRotation() + 360.f * dt);
        }
    }
};
