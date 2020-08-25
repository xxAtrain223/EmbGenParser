#include <gtest/gtest.h>
#include "EmbGen/Parser/Loop.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Loop, OneCode)
                {
                    Loop loop;

                    std::vector<Code> code = loop.getCode();
                    ASSERT_EQ(code.size(), 1);
                    ASSERT_EQ(code[0].getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code[0].getText(), "    // Code");
                }

                TEST(parser_Loop, TwoCodes)
                {
                    Loop loop;

                    std::vector<Code> code = loop.getCode();
                    ASSERT_EQ(code.size(), 2);
                    ASSERT_EQ(code[0].getInsert(), Code::Insert::Once);
                    //ASSERT_EQ(code[0].getText(), "    // First Code");
                    ASSERT_EQ(code[1].getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code[1].getText(), "    // Second Code");
                }
            }
        }
    }
}