#ifndef EMBGEN_PARSER_STOP_HPP
#define EMBGEN_PARSER_STOP_HPP

#include "EmbGen/Parser/Code.hpp"
#include <memory>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class Stop
            {
                std::string m_command;
                std::shared_ptr<Code> m_code;

            public:

                std::string getCommand() const;

                std::shared_ptr<Code> getCode() const;
            };
        }
    }
}

#endif // EMBGEN_PARSER_STOP_HPP