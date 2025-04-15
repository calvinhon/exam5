#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <map>

class ASpell;

class SpellBook {

    public:
        SpellBook();
        ~SpellBook();
        void    learnSpell(ASpell* spell);
        void    forgetSpell(const std::string& name);
        ASpell* createSpell(const std::string& name);
    
    private:
        SpellBook(const SpellBook& src);
        SpellBook& operator=(const SpellBook& src);
        std::map<std::string, ASpell*> book;

};

#endif