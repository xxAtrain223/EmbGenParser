#include "EmbGen/Parser/Variable.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::string Variable::getType() const
            {
                return m_type;
            }

            std::string Variable::getName() const
            {
                return m_name;
            }

            bool Variable::isCore() const
            {
                return m_core;
            }

            std::string Variable::getAppendage() const
            {
                return m_appendage;
            }

            std::string Variable::getDefault() const
            {
                return m_default;
            }

            std::vector<Parameter> Variable::getParameters() const
            {
                return m_parameters;
            }
        }
    }
}