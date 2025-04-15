#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
    std::map<std::string, ASpell*>::iterator it;
    for (it = book.begin(); it != book.end(); ++it)
        delete it->second;
    book.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell && book.find(spell->getName()) == book.end())
        book[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string& name) {
    std::map<std::string, ASpell *>::iterator it = book.find(name);
    if (it != book.end()) {
        delete it->second;
        book.erase(it);
    }
}

ASpell* SpellBook::createSpell(const std::string& name) {
    std::map<std::string, ASpell*>::iterator it = book.find(name);
    if (it != book.end())
        return it->second->clone();
    return NULL;
}
