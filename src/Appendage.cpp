#include "EmbGen/Parser/Appendage.hpp"
#include "EmbGen/Parser/Stop.hpp"
#include "EmbGen/Parser/Exceptions.hpp"

namespace emb
{
    namespace gen
    {
        namespace parser
        {
            Appendage::Appendage()
            {
            }
            
            std::string Appendage::getName() const
            {
                return m_name;
            }
            
            std::string Appendage::getVersion() const
            {
                return m_version;
            }
            
            std::string Appendage::getLibDeps() const
            {
                return m_lib_deps;
            }

            std::vector<Include> Appendage::getIncludes() const
            {
                return m_includes;
            }

            std::vector<Variable> Appendage::getVariables() const
            {
                return m_variables;
            }

            std::shared_ptr<Setup> Appendage::getSetup() const
            {
                return m_setup;
            }

            std::shared_ptr<Loop> Appendage::getLoop() const
            {
                return m_loop;
            }

            std::map<std::string, std::shared_ptr<Command>> Appendage::getCommands() const
            {
                return m_commands;
            }

            std::shared_ptr<Stop> Appendage::getStop() const
            {
                return m_stop;
            }
        }
    }
}
