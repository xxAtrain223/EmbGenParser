#include <gtest/gtest.h>
#include "EmbGen/Parser/Parameter.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Parameter, CommandParameter)
                {
                    Parameter parameter;

                    ASSERT_EQ(parameter.getType(), "uint8_t");
                    ASSERT_EQ(parameter.getName(), "val");
                    ASSERT_FALSE(parameter.isCore());
                    ASSERT_EQ(parameter.getAppendage(), "");
                }

                TEST(parser_Parameter, VariableParameter)
                {
                    Parameter parameter;

                    ASSERT_EQ(parameter.getType(), "int16_t");
                    ASSERT_EQ(parameter.getName(), "val");
                    ASSERT_TRUE(parameter.isCore());
                    ASSERT_EQ(parameter.getAppendage(), "");
                }

                TEST(parser_Parameter, Appendage)
                {
                    Parameter parameter;

                    ASSERT_EQ(parameter.getType(), "int16_t");
                    ASSERT_EQ(parameter.getName(), "val");
                    ASSERT_FALSE(parameter.isCore());
                    ASSERT_EQ(parameter.getAppendage(), "OtherAppendage");
                }

                TEST(parser_Parameter, ParameterValidation)
                {
                    Parameter parameter;

                    ASSERT_EQ(parameter.getType(), "int16_t");
                    ASSERT_EQ(parameter.getName(), "val");
                    ASSERT_FALSE(parameter.isCore());
                    ASSERT_EQ(parameter.getMin(), "-512");
                    ASSERT_EQ(parameter.getMax(), "1024");
                }
            }
        }
    }
}