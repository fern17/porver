#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <SFML/Window.hpp>

#include <list>
#include <queue>

class ObjectManager{
private:
    std::list<Object *> _objList;
    std::list<Object *>::iterator _listIterator;
    std::queue<Object *> _toRemove;
    sf::RenderWindow screen;
public:
    ObjectManager(sf::RenderWindow &scr);
    void Iterate();
    void AddObject(Object *obj);
    void RemoveObject(Object *obj);

};
#endif
