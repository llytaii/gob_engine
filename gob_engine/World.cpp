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
}
