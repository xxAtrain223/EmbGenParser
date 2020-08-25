#include <gtest/gtest.h>
#include "EmbGen/Parser/Include.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Include, GetValue_DefaultStandard)
                {
                    Include include;

                    ASSERT_EQ(include.getValue(), "test.h");
                    ASSERT_FALSE(include.isStandard());
                }

                TEST(parser_Include, GetValue_Standard)
                {
                    Include include;

                    ASSERT_EQ(include.getValue(), "test.h");
                    ASSERT_TRUE(include.isStandard());
                }

                TEST(parser_Include, GetValue_NonStandard)
                {
                    Include include;

                    ASSERT_EQ(include.getValue(), "test.h");
                    ASSERT_FALSE(include.isStandard());
                }
            }
        }
    }
}