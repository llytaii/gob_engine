#pragma once
#include <map>
#include <string>

namespace GOB 
{
	class Action
	{
	public:
		Action();
		float get_effect_for_goal(std::string _goal_name);
		void set_effect_for_goal(std::string _goal_name, float _effect);
	private:
		std::map<std::string, float> m_affected_goals;
		const int m_id;

		inline static int static_id{ 0 };
	};
}
