#include "World.h"

#include <algorithm>

namespace GOB
{
    void World::update(float _delta)
    {
        // std::for_each(std::execution::par_unseq, m_npcs.begin(), m_npcs.end(), std::bind(&Reasoner::update_npc, &m_reasoner, std::placeholders::_1));
        for (auto& npc : m_npcs)
            m_reasoner.update_npc(npc);
    }
    std::shared_ptr<INPC> World::add_npc(INPC _npc)
    {
        std::shared_ptr<INPC> npc = std::make_shared<INPC>(new INPC{ _npc });
        m_npcs.push_back(npc);
        return npc;
    }
    std::shared_ptr<INPC> World::add_npc(std::shared_ptr<INPC> _npc)
    {
        m_npcs.push_back(_npc);
        return _npc;
    }
    void World::link_game_object_to_all_npcs(std::shared_ptr<IGameObject> _game_object)
    {
        for(auto& npc : m_npcs)

    }
    void World::link_game_object_to_these_npcs(std::shared_ptr<IGameObject> _game_object, npc_list_t _npcs)
    {
    }
    std::shared_ptr<IGameObject> World::add_game_object(IGameObject* _npc)
    {
        return std::shared_ptr<IGameObject>();
    }
}
