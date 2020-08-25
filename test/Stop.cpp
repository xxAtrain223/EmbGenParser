#include <gtest/gtest.h>
#include "EmbGen/Parser/Stop.hpp"
#include "EmbGen/Parser/Exceptions.hpp"
#include "EmbGen/Parser/Code.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Stop, Command)
                {
                    Stop stop;

                    ASSERT_EQ(stop.getCommand(), "detach");
                    ASSERT_EQ(stop.getCode(), nullptr);
                }

                TEST(parser_Stop, Code)
                {
                    Stop stop;

                    ASSERT_EQ(stop.getCommand(), "");
                    //ASSERT_EQ(stop.getCode()->getText(), "    // Code");
                }
            }
        }
    }
}