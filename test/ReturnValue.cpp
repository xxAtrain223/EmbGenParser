#include <gtest/gtest.h>
#include "EmbGen/Parser/ReturnValue.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_ReturnValue, CommandReturnValue)
                {
                    ReturnValue returnValue;

                    ASSERT_EQ(returnValue.getType(), "uint8_t");
                    ASSERT_EQ(returnValue.getName(), "val");
                }
            }
        }
    }
}