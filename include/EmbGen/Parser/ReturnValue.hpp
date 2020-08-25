#ifndef EMBGEN_PARSER_RETURNVALUE_HPP
#define EMBGEN_PARSER_RETURNVALUE_HPP

#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class ReturnValue
            {
                std::string m_type, m_name;

            public:

                std::string getType() const;

                std::string getName() const;
            };
        }
    }
}

#endif // EMBGEN_PARSER_RETURNVALUE_HPP