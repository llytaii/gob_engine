#include "Goal.h"

namespace GOB
{
	Goal::Goal(std::string _name, float _insistance, float _threshold)
		: m_name{ _name }, m_insistance{ _insistance }, m_threshold{ _threshold }
	{

	}
	float Goal::get_dissatisfaction()
	{
		return 0.0f;
	}
}
