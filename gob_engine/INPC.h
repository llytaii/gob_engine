#pragma once
#include "types.h"
#include "goal.h"
#include "action.h"

#include <string>
#include <tuple>

namespace GOB
{
	class IGameObject;
	
	class INPC
	{
	public:
		virtual ~INPC() = default; // make it polymorphic

		std::tuple<Action, std::shared_ptr<IGameObject>, uint8_t> m_current_action{ Action{} , nullptr, 0}; // action/GO/action_rank

		// goals
		bool add_goal(Goal _goal, uint16_t _rank = 0);
		bool remove_goal(std::string _name);
		void set_goal_matrix(goal_matrix_t _matrix);

		goal_matrix_t m_goal_matrix; // TODO: how many ranks?
	};
}

