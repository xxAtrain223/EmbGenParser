#include <gtest/gtest.h>
#include "EmbGen/Parser/Code.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Code, OneLine)
                {
                    Code code;

                    ASSERT_EQ(code.getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code.getText(), "    rv = 7;");
                }

                TEST(parser_Code, SecondLineIndented)
                {
                    Code code;

                    ASSERT_EQ(code.getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code.getText(),
                    //    "    if (x == 0)\n"
                    //   "        DoThing();");
                }

                TEST(parser_Code, FirstLineIndented)
                {
                    Code code;

                    ASSERT_EQ(code.getInsert(), Code::Insert::Once);
                    //ASSERT_EQ(code.getText(),
                    //    "        im = a;\n"
                    //    "    monster();");
                }

                TEST(parser_Code, TrimWhitespace)
                {
                    Code code;

                    ASSERT_EQ(code.getInsert(), Code::Insert::Once);
                    //ASSERT_EQ(code.getText(), "    // Whitespace Test");
                }

                TEST(parser_Code, InvalidInsert)
                {
                    ASSERT_THROW(Code code, AttributeException);
                }
            }
        }
    }
}