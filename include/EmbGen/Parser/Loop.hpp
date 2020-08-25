#ifndef EMBGEN_PARSER_LOOP_HPP
#define EMBGEN_PARSER_LOOP_HPP

#include <vector>
#include "EmbGen/Parser/Code.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class Loop
            {
                std::vector<Code> m_code;

            public:

                std::vector<Code> getCode() const;
            };
        }
    }
}

#endif // EMBGEN_PARSER_LOOP_HPP