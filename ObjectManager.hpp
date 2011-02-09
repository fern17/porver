#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <SFML/Window.hpp>
#include "Object.hpp"
#include <list>
#include <queue>

class ObjectManager{
protected:
    std::list<Object *> _objList;
    std::list<Object *>::iterator _listIterator;
    std::queue<Object *> _toRemove;
    sf::RenderWindow & _screen;
public:
    ObjectManager(sf::RenderWindow &scr);
    void Iterate();
    Object * AddObject(Object *obj);
    void RemoveObject(Object *obj);

};
#endif
