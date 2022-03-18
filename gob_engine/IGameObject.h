#pragma once
#include "action.h"

#include <vector>

namespace GOB
{
	class IGameObject
	{
	public:
		virtual ~IGameObject() = default; // make it polymorphic

		void add_action(Action _action);
		void remove_action(Action _action);

		std::vector<Action> m_actions;
	};

}