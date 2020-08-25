#include <gtest/gtest.h>
#include "EmbGen/Parser/Command.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Command, NoParameters)
                {
                    Command command;
                    std::vector<Parameter> parameters = command.getParameters();
                    std::shared_ptr<Code> code = command.getCode();

                    ASSERT_EQ(command.getName(), "NoParam");
                    ASSERT_EQ(parameters.size(), 0);
                    ASSERT_EQ(code->getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code->getText(), "    // Command Code");
                }

                TEST(parser_Command, OneParameter)
                {
                    Command command;
                    std::vector<Parameter> parameters = command.getParameters();
                    std::shared_ptr<Code> code = command.getCode();

                    ASSERT_EQ(command.getName(), "OneParam");
                    ASSERT_EQ(parameters.size(), 1);
                    ASSERT_EQ(parameters.at(0).getType(), "uint8_t");
                    ASSERT_EQ(parameters.at(0).getName(), "val");
                    ASSERT_EQ(code->getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code->getText(), "    // Use val");
                }

                TEST(parser_Command, TwoParameters)
                {
                    Command command;
                    std::vector<Parameter> parameters = command.getParameters();
                    std::shared_ptr<Code> code = command.getCode();

                    ASSERT_EQ(command.getName(), "TwoParam");
                    ASSERT_EQ(parameters.size(), 2);
                    ASSERT_EQ(parameters.at(0).getType(), "int16_t");
                    ASSERT_EQ(parameters.at(0).getName(), "int_val");
                    ASSERT_EQ(parameters.at(1).getType(), "float");
                    ASSERT_EQ(parameters.at(1).getName(), "float_val");
                    ASSERT_EQ(code->getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code->getText(), "    // Do something with int_val and float_val");
                }

                TEST(parser_Command, OneReturnValue)
                {
                    Command command;
                    std::vector<ReturnValue> returnValues = command.getReturnValues();
                    std::shared_ptr<Code> code = command.getCode();

                    ASSERT_EQ(command.getName(), "OneParam");
                    ASSERT_EQ(returnValues.size(), 1);
                    ASSERT_EQ(returnValues.at(0).getType(), "uint8_t");
                    ASSERT_EQ(returnValues.at(0).getName(), "val");
                    ASSERT_EQ(code->getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code->getText(), "    // Use val");
                }

                TEST(parser_Command, TwoReturnValues)
                {
                    Command command;
                    std::vector<ReturnValue> returnValues = command.getReturnValues();
                    std::shared_ptr<Code> code = command.getCode();

                    ASSERT_EQ(command.getName(), "TwoParam");
                    ASSERT_EQ(returnValues.size(), 2);
                    ASSERT_EQ(returnValues.at(0).getType(), "int16_t");
                    ASSERT_EQ(returnValues.at(0).getName(), "int_val");
                    ASSERT_EQ(returnValues.at(1).getType(), "float");
                    ASSERT_EQ(returnValues.at(1).getName(), "float_val");
                    ASSERT_EQ(code->getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(code->getText(), "    // Do something with int_val and float_val");
                }
            }
        }
    }
}