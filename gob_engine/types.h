#pragma once
#include "Goal.h"

#include <initializer_list>
#include <memory>
#include <vector>

namespace GOB
{
	class INPC;
	using goal_matrix_t = std::vector<std::vector<Goal>>;
	using npc_list_t = std::initializer_list<std::shared_ptr<INPC>>;
}
