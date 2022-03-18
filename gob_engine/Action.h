#pragma once
#include "types.h"

#include <map>
#include <string>

namespace GOB 
{
	class Action
	{
	public:
		float get_effect_for_goal(std::string _goal_name) const;
		void set_effect_for_goal(std::string _goal_name, float _effect);

	private:
		std::map<std::string, float> m_affected_goals; 
	};
}
