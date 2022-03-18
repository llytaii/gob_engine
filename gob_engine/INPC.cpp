#include "INPC.h"
namespace GOB
{
    bool INPC::add_goal(Goal _goal, uint16_t _rank)
    {
        if (_rank >= m_goal_matrix.size())
            return false;

        // exit if goal with same name exists 
        for (auto& row : m_goal_matrix)
            for (auto& goal : row)
                if (goal.m_name == _goal.m_name)
                    return false;

        m_goal_matrix[_rank].push_back(_goal);
        return true;
    }
    bool INPC::remove_goal(std::string _name)
    {
        for (auto& row : m_goal_matrix)
            for (auto itr{ row.begin() }; itr != row.end(); ++itr)
                if (itr->m_name == _name)
                    row.erase(itr); return true;
        return false;
    }
    void INPC::set_goal_matrix(goal_matrix_t _matrix)
    {
        m_goal_matrix = _matrix;
    }
}
