#include "EmbGen/Parser/Command.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            Command::Command()
            {
            }

            Command::Command(std::string name, std::vector<Parameter>&& parameters, std::vector<ReturnValue>&& returnValues, std::shared_ptr<Code> code) :
                m_name(name), m_parameters(parameters), m_returnValues(returnValues), m_code(code)
            {
            }

            std::string Command::getName() const
            {
                return m_name;
            }

            std::vector<Parameter> Command::getParameters() const
            {
                return m_parameters;
            }

            std::vector<ReturnValue> Command::getReturnValues() const
            {
                return m_returnValues;
            }
            
            std::shared_ptr<Code> Command::getCode() const
            {
                return m_code;
            }
        }
    }
}