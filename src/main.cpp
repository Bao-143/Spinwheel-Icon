#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(SpinPlayer, PlayerObject) {
    struct Fields {
        float spin = 0.f;
    };

    void update(float dt) {
        PlayerObject::update(dt);

        auto& self = m_fields;
        self->spin += 360.f * dt;

        if (m_iconSprite) {
            m_iconSprite->setRotation(self->spin);
        }

        if (m_iconSpriteSecondary) {
            m_iconSpriteSecondary->setRotation(self->spin);
        }

        if (m_iconGlow) {
            m_iconGlow->setRotation(self->spin);
        }
    }
};
