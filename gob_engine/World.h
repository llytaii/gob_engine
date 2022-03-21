#pragma once
#include "types.h"
#include "action.h"
#include "goal.h"

#include "Reasoner.h"
#include "IGameObject.h"
#include "INPC.h"

#include <map>
#include <memory>
#include <tuple>
#include <vector>

namespace GOB
{
    class World
    {
    public:
        void update(float _delta);

        // npcs
        std::shared_ptr<INPC> add_npc(INPC _npc);
        std::shared_ptr<INPC> add_npc(std::shared_ptr <INPC> _npc);

        // game objects
        void link_game_object_to_all_npcs(std::shared_ptr<IGameObject> _game_object);
        void link_game_object_to_these_npcs(std::shared_ptr<IGameObject> _game_object, npc_list_t _npcs);

        std::shared_ptr<IGameObject> add_game_object(IGameObject* _npc);

    private:
        Reasoner m_reasoner;
        std::vector<std::shared_ptr<INPC>> m_npcs;
        std::vector<std::shared_ptr<IGameObject>> m_game_objects;
    };
}
