#include "Action.h"

namespace GOB 
{
	Action::Action()
		: m_id{ static_id++ }
	{}

	float Action::get_effect_for_goal(std::string _goal_name)
	{
		if (auto itr = m_affected_goals.find(_goal_name); itr != m_affected_goals.end())
			return itr->second;
		return 0.0f;
	}

	void Action::set_effect_for_goal(std::string _goal_name, float _effect)
	{
		m_affected_goals.insert({ _goal_name, _effect });
	}
}

