#pragma once

#include <string>

namespace GOB
{
    class Goal
    {
    public:
        Goal(std::string _name, float _insistance, float _threshold);

        float get_dissatisfaction();

        std::string m_name;
        float m_insistance;
        float m_threshold;
    };
}
