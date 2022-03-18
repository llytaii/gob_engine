#include "goal.h"

#include <algorithm>

namespace GOB
{
    Goal::Goal(std::string _name, float _threshold, float _insistance)
        : m_name{ _name }, m_threshold{ _threshold }, m_insistance{ _insistance }
    {
    }
    float Goal::get_discontentment(float _new_value) const
    {
        return _new_value * _new_value;
    }
    void Goal::set_insistance(float _val)
    {
        m_insistance = std::clamp(_val, 0.0f, 1.0f);
    }
    void Goal::change_insistance(float _val)
    {
        m_insistance = std::clamp(m_insistance + _val, 0.0f, 1.0f);
    }
    float Goal::get_insistance()
    {
        return m_insistance;
    }
    void Goal::set_threshold(float _val)
    {
        m_threshold = std::clamp(_val, 0.0f, 1.0f);
    }
    float Goal::get_threshold()
    {
        return m_threshold;
    }
}
