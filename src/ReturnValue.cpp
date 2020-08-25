#include "EmbGen/Parser/ReturnValue.hpp"
#include "EmbGen/Parser/Exceptions.hpp"
#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::string ReturnValue::getType() const
            {
                return m_type;
            }

            std::string ReturnValue::getName() const
            {
                return m_name;
            }
        }
    }
}