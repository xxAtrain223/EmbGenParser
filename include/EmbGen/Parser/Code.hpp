#ifndef EMBGEN_PARSER_CODE_HPP
#define EMBGEN_PARSER_CODE_HPP

#include <string>

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            class Code
            {
            public:
                enum class Insert
                {
                    Each,
                    Once
                };

                Insert getInsert() const;

                Code();
                Code(std::string text, Insert insert = Insert::Each);

            private:
                std::string m_text;
                Insert m_insert;

                std::string processCode(const std::string& text);
            };
        }
    }
}

#endif // EMBGEN_PARSER_CODE_HPP