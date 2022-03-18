#include "IGameObject.h"

namespace GOB
{
    void IGameObject::add_action(Action _action)
    {
        m_actions.push_back(_action);
    }

    void IGameObject::remove_action(Action _action)
    {
        if (auto itr{ std::find(m_actions.begin(), m_actions.end(), _action) }; itr != m_actions.end())
            m_actions.erase(itr);
    }

}