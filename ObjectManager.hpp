#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <list>
#include <queue>

class ObjectManager{
private:
    std::list<Object *> _objList;
    std::list<Object *>::iterator _listIterator;
    std::queue<Object *> _toRemove;
public:
    ObjectManager();
    void Iterate();
    void AddObject(Object *obj);
    void RemoveObject(Object *obj);


};
#endif
