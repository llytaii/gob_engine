#pragma once
#include "Reasoner.h"
#include "GOB_NPC.h"

#include <map>
#include <vector>

namespace GOB
{
    template<typename ClassNPC_t, typename ClassGameObject_t>
    class GOB_World
    {
    public:
        // actions
        int add_action(Action _action);
        void remove_action(int _id);
        Action* get_action(int _id);

        // game objects
        bool add_game_object(ClassGameObject_t* _game_object, int _id);
        int add_game_object_action(Action _action, ClassGameObject_t* _game_object);


        // goals




        // npcs
        GOB_NPC* add_npc(GOB_NPC _npc);
        GOB_NPC* get_npc(ClassNPC_t* _npc);

        // etc
        bool add_action_to_npc(int _id, ClassNPC_t* _npcs);

    private:
        Reasoner m_reasoner;
        std::vector<GOB_NPC<ClassNPC_t> m_npc_components;
        std::vector<Action> m_actions;
        std::map<int, ClassGameObject_t*> m_id_object_table;
    };
}
