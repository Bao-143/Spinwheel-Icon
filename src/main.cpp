#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(SpinPlayer, GJBaseGameLayer) {
    void processCommands(float dt) {
        GJBaseGameLayer::processCommands(dt);

        auto player1 = m_player1;
        auto player2 = m_player2;

        if (player1) {
            player1->setRotation(player1->getRotation() + 360.f * dt);
        }

        if (player2) {
            player2->setRotation(player2->getRotation() + 360.f * dt);
        }
    }
};
