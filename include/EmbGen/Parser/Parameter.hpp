#ifndef EMBGEN_PARSER_PARAMETER_HPP
#define EMBGEN_PARSER_PARAMETER_HPP

#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class Parameter
            {
                std::string m_type, m_name, m_min, m_max, m_appendage, m_default;
                bool m_core;

            public:

                std::string getType() const;
                
                std::string getName() const;

                std::string getMin() const;

                std::string getMax() const;

                bool isCore() const;

                std::string getAppendage() const;

                std::string getDefault() const;
            };
        }
    }
}

#endif // EMBGEN_PARSER_PARAMETER_HPP