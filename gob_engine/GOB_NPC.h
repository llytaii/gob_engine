#pragma once
#include "Action.h"
#include "Goal.h"

#include <vector>

namespace GOB
{
    template<typename ClassNPC_t>
    class GOB_NPC
    {
    public:
        ClassNPC_t* m_npc;
        Action* m_current_action;
        std::vector<Goal> m_goals;
        std::vector<int> m_action_ids;
    };
}

