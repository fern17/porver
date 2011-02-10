#include "ObjectManager.hpp"
#include "Object.hpp"

ObjectManager::ObjectManager(sf::RenderWindow &scr) : _screen(scr){
    _listIterator = _objList.begin(); //que es end
}

void ObjectManager::Iterate(){
    _listIterator = _objList.begin();
    while(_listIterator != _objList.end()){
        (*_listIterator)->Step();
        _screen.Draw((*_listIterator)->GetSprite());
        _listIterator++;
    }
}

Object * ObjectManager::AddObject(Object *obj){
    _objList.push_back(obj);
    return obj;
}

void ObjectManager::RemoveObject(Object *obj){
	_toRemove.push(obj);
}

void ObjectManager::RemoveAtQueue(){
	while(_toRemove.size() != 0){
		Object * toErase = _toRemove.front();
		_objList.remove(toErase);
		delete toErase;
		_toRemove.pop();
	}
}
