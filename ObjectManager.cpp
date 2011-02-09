#include "ObjectManager.hpp"


ObjectManager::ObjectManager(sf::RenderWindow &scr){
    _listIterator = _objList.begin(); //que es end
    screen = scr;
}

void ObjectManager::Iterate(){
    _listIterator = _objList.begin();
    while(_listIterator != _objList.end()){
        (_listIterator)->Step();
        screen.Draw((_listIterator)->GetSprite());
        _listIterator++;
    }
}

void ObjectManager::AddObject(Object *obj){
    _objList.push_back(obj);
}

void RemoveObject(Object *obj){
    _objList.remove(obj);
}
