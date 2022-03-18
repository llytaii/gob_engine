#pragma once

#include <string>

namespace GOB
{
    class Goal
    {
    public:
        Goal(std::string _name, float _threshold = 1.0f, float _insistance = 0.0f);

        float get_discontentment(float _new_value) const;

        // insistance
        void set_insistance(float _val);
        void change_insistance(float _val);
        float get_insistance();

        void set_threshold(float _val);
        float get_threshold();

        const std::string m_name;

    private:
        float m_insistance{0.0f};
        float m_threshold{1.0f};
    };
}
