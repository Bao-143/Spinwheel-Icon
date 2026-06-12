#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/loader/SettingV3.hpp>

using namespace geode::prelude;

class $modify(SpinPlayer, PlayerObject) {
    struct Fields {
        float spinOffset = 0.f;
    };
    void update(float dt) {
        PlayerObject::update(dt);
        PLayerObject::init(player, ship, gameLayer, layer, playLayer)
        m_fields->spinOffset += 360.f * dt;
        if (m_iconSprite) {
            m_iconSprite->setRotation(
                m_iconSprite->getRotation() + m_fields->spinOffset
            );
        }
    }
};
