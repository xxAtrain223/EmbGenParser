#include "EmbGen/Parser/Setup.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            std::vector<Code> Setup::getCode() const
            {
                return m_code;
            }
        }
    }
}