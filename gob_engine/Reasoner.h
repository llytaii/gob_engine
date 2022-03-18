#pragma once

#include <functional>

namespace GOB
{
	class INPC;

	class Reasoner
	{
	public:
		void update_npc(std::shared_ptr<INPC> _npc); // updates NPC.current_action when needed
		void set_strategy(std::function<void(std::shared_ptr<INPC>)> _strategy_function);
		
		// strategies
		void choose_action_most_pressing_goal(std::shared_ptr<INPC> _npc);
		void choose_action_best_satisfaction(std::shared_ptr<INPC> _npc);
		void choose_action_best_satisfaction_time(std::shared_ptr<INPC> _npc);

		std::function<void(std::shared_ptr<INPC>)> m_active_strategy;

		float m_day_duration;
	};
}
