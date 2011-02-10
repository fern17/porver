#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <SFML/Graphics.hpp>
#include <list>
#include <queue>

class Object;

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
    void RemoveAtQueue();

};
#endif
