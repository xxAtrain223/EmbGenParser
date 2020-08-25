#include <gtest/gtest.h>
#include "EmbGen/Parser/Variable.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Variable, uint8_t)
                {
                    Variable variable;

                    ASSERT_EQ(variable.getType(), "uint8_t");
                    ASSERT_EQ(variable.getName(), "val");
                    ASSERT_FALSE(variable.isCore());
                    ASSERT_EQ(variable.getParameters().size(), 0);
                    ASSERT_EQ(variable.getAppendage(), "");
                }

                TEST(parser_Variable, CoreVal)
                {
                    Variable variable;

                    ASSERT_EQ(variable.getType(), "int16_t");
                    ASSERT_EQ(variable.getName(), "coreVal");
                    ASSERT_TRUE(variable.isCore());
                    ASSERT_EQ(variable.getParameters().size(), 0);
                    ASSERT_EQ(variable.getAppendage(), "");
                }

                TEST(parser_Variable, Parameters)
                {
                    Variable variable;

                    ASSERT_EQ(variable.getType(), "Foo");
                    ASSERT_EQ(variable.getName(), "bar");
                    ASSERT_FALSE(variable.isCore());
                    ASSERT_EQ(variable.getParameters().size(), 1);
                    ASSERT_EQ(variable.getAppendage(), "");
                }

                TEST(parser_Variable, Appendage)
                {
                    Variable variable;

                    ASSERT_EQ(variable.getType(), "uint8_t");
                    ASSERT_EQ(variable.getName(), "val");
                    ASSERT_FALSE(variable.isCore());
                    ASSERT_EQ(variable.getParameters().size(), 0);
                    ASSERT_EQ(variable.getAppendage(), "OtherAppendage");
                }

                TEST(parser_Variable, AppendageParameter)
                {
                    Variable variable;

                    ASSERT_EQ(variable.getType(), "Foo");
                    ASSERT_EQ(variable.getName(), "bar");
                    ASSERT_FALSE(variable.isCore());
                    ASSERT_EQ(variable.getParameters().size(), 1);
                    ASSERT_EQ(variable.getAppendage(), "");
                }
            }
        }
    }
}