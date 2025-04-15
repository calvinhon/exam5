#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <map>

class ATarget;

class TargetGenerator {
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(const std::string& type);
        ATarget* createTarget(const std::string& type);
    
    private:
        TargetGenerator(const TargetGenerator& src);
        TargetGenerator& operator=(const TargetGenerator& src);
        std::map<std::string, ATarget*> tmap;
};

#endif