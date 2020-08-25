#include "EmbGen/Parser/Parameter.hpp"
#include "EmbGen/Parser/Exceptions.hpp"
#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::string Parameter::getType() const
            {
                return m_type;
            }

            std::string Parameter::getName() const
            {
                return m_name;
            }

            std::string Parameter::getMin() const
            {
                return m_min;
            }

            std::string Parameter::getMax() const
            {
                return m_max;
            }

            bool Parameter::isCore() const
            {
                return m_core;
            }

            std::string Parameter::getAppendage() const
            {
                return m_appendage;
            }

            std::string Parameter::getDefault() const
            {
                return m_default;
            }
        }
    }
}