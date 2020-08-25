#include "EmbGen/Parser/Stop.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            
            std::string Stop::getCommand() const
            {
                return m_command;
            }
            
            std::shared_ptr<Code> Stop::getCode() const
            {
                return m_code;
            }
        }
    }
}