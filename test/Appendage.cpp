#include <gtest/gtest.h>
#include "EmbGen/Parser/Appendage.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            namespace test
            {
                TEST(parser_Appendage, NoElements)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "NoElements");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);
                    ASSERT_EQ(appendage.getCommands().size(), 0);
                }
                
                TEST(parser_Appendage, Include)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "Include");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "Wire");

                    std::vector<Include> includes = appendage.getIncludes();
                    ASSERT_EQ(includes.size(), 1);
                    ASSERT_EQ(includes.at(0).getValue(), "Wire.h");
                    ASSERT_EQ(includes.at(0).isStandard(), true);

                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);
                    ASSERT_EQ(appendage.getCommands().size(), 0);
                }

                TEST(parser_Appendage, Variable)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "Variable");
                    ASSERT_EQ(appendage.getVersion(), "1.0");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);

                    std::vector<Variable> variables = appendage.getVariables();
                    ASSERT_EQ(variables.size(), 1);
                    ASSERT_EQ(variables.at(0).getType(), "uint8_t");
                    ASSERT_EQ(variables.at(0).getName(), "pin");

                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);
                    ASSERT_EQ(appendage.getCommands().size(), 0);
                }

                TEST(parser_Appendage, Setup)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "Setup");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);

                    std::shared_ptr<parser::Setup> setup = appendage.getSetup();
                    ASSERT_NE(setup, nullptr);
                    std::vector<Code> codes = setup->getCode();
                    ASSERT_EQ(codes.size(), 2);
                    ASSERT_EQ(codes.at(0).getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(codes.at(0).getText(), "    // Setup Code Each");
                    ASSERT_EQ(codes.at(1).getInsert(), Code::Insert::Once);
                    //ASSERT_EQ(codes.at(1).getText(), "    // Setup Code Once");

                    ASSERT_EQ(appendage.getLoop(), nullptr);
                    ASSERT_EQ(appendage.getCommands().size(), 0);
                }

                TEST(parser_Appendage, Loop)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "Loop");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    
                    std::shared_ptr<Loop> loop = appendage.getLoop();
                    ASSERT_NE(loop, nullptr);
                    std::vector<Code> codes = loop->getCode();
                    ASSERT_EQ(codes.size(), 2);
                    ASSERT_EQ(codes.at(0).getInsert(), Code::Insert::Once);
                    //ASSERT_EQ(codes.at(0).getText(), "    // Loop Code Once");
                    ASSERT_EQ(codes.at(1).getInsert(), Code::Insert::Each);
                    //ASSERT_EQ(codes.at(1).getText(), "    // Loop Code Each");

                    ASSERT_EQ(appendage.getCommands().size(), 0);
                }

                TEST(parser_Appendage, Command)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "Command");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);

                    std::map<std::string, std::shared_ptr<Command>> commands = appendage.getCommands();
                    ASSERT_EQ(commands.size(), 1);
                    std::shared_ptr<Command> SetValue = commands.at("SetValue");
                    ASSERT_EQ(SetValue->getName(), "SetValue");
                    std::vector<Parameter> parameters = SetValue->getParameters();
                    ASSERT_EQ(parameters.size(), 1);
                    ASSERT_EQ(parameters.at(0).getType(), "int16_t");
                    ASSERT_EQ(parameters.at(0).getName(), "val");
                    //ASSERT_EQ(SetValue->getCode()->getText(), "    value = val;");
                }

                TEST(parser_Appendage, StopWithCode)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "StopWithCode");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);
                    
                    std::shared_ptr<Stop> stop = appendage.getStop();
                    ASSERT_NE(stop, nullptr);
                    //ASSERT_EQ(stop->getCode()->getText(), "    servo.detach();");
                    ASSERT_EQ(stop->getCommand(), "");
                }

                TEST(parser_Appendage, StopCommandName)
                {
                    Appendage appendage;

                    ASSERT_EQ(appendage.getName(), "StopCommandName");
                    ASSERT_EQ(appendage.getVersion(), "");
                    ASSERT_EQ(appendage.getLibDeps(), "");
                    ASSERT_EQ(appendage.getIncludes().size(), 0);
                    ASSERT_EQ(appendage.getVariables().size(), 0);
                    ASSERT_EQ(appendage.getSetup(), nullptr);
                    ASSERT_EQ(appendage.getLoop(), nullptr);

                    std::shared_ptr<Stop> stop = appendage.getStop();
                    ASSERT_NE(stop, nullptr);
                    ASSERT_EQ(stop->getCode(), nullptr);
                    ASSERT_EQ(stop->getCommand(), "Detach");
                }
            }
        }
    }
}