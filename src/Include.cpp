#include "EmbGen/Parser/Include.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::string Include::getValue() const
            {
                return m_value;
            }

            bool Include::isStandard() const
            {
                return m_standard;
            }
        }
    }
}