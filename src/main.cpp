#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(SpinPlayer, PlayerObject) {
    struct Fields {
        float spinOffset = 0.f;
    };
    void update(float dt) {
        PlayerObject::update(dt);
        m_fields->spinOffset += 360.f * dt;
        if (m_iconSprite) {
            m_iconSprite->setRotation(
                m_iconSprite->getRotation() + m_fields->spinOffset
            );
        }
    }
};
