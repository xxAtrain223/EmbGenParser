#ifndef EMBGEN_PARSER_INCLUDE_HPP
#define EMBGEN_PARSER_INCLUDE_HPP

#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class Include
            {
                std::string m_value;
                bool m_standard;

            public:

                std::string getValue() const;

                bool isStandard() const;
            };
        }
    }
}

#endif // EMBGEN_PARSER_INCLUDE_HPP