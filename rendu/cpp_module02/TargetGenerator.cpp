#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget*>::iterator it;
    for (it = tmap.begin(); it != tmap.end(); ++it)
        delete it->second;
    tmap.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target && tmap.find(target->getType()) == tmap.end())
        tmap[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const std::string& type) {
    std::map<std::string, ATarget*>::iterator it = tmap.find(type);
    if (it != tmap.end()) {
        delete it->second;
        tmap.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(const std::string& type) {
    std::map<std::string, ATarget*>::iterator it = tmap.find(type);
    if (it != tmap.end())
        return it->second->clone();
    return NULL;
}
