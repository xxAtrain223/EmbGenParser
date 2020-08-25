#include "EmbGen/Parser/Loop.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::vector<Code> Loop::getCode() const
            {
                return m_code;
            }
        }
    }
}