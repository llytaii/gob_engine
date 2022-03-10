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
        Action* get_action(int _id);

        // game objects
        int add_game_object_action(Action _action, ClassGameObject_t* _game_object);
        bool add_game_object(ClassGameObject_t* _game_object, int _id);


        // goals



        // npcs
        void add_npc(GOB_NPC _npc);
        void get_npc(ClassNPC_t* _npc_ptr);

        // etc
        bool add_action_to_npc(int _id, ClassNPC_t* _npcs);

    private:
        Reasoner m_reasoner;
        std::vector<GOB_NPC<ClassNPC_t> m_npc_components;
        std::vector<Action> m_actions;
        std::map<int, ClassGameObject_t*> m_id_object_table;
    };
}
