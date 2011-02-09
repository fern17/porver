#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Object.hpp"
#include <list>
bool GameOn(sf::RenderWindow &screen, unsigned int level){
    while(true){
        screen.Clear();
        sf::Event event;
        std::list<Object *> objList;
        while(screen.GetEvent(event)){
            //if((event.EventType == sf::Event::Closed) or (event.Key.Code == sf::Key::Escape))
                return false;
        }
        std::list<Object *>::iterator p = objList.begin();
        while(p != objList.end()){
            (*p)->Step();
            p++;
            screen.Draw((*p)->GetSprite());
        }

        screen.Display();
    }
}


int main(){
    sf::RenderWindow screen(sf::VideoMode(640, 480, 32),"porver");

    //const sf::Input& in = screen.GetInput();
    unsigned int level = 0;
    while (screen.IsOpened()){
        while(GameOn(screen,level)){
            level++;
        }
        screen.Close();
    }
    return EXIT_SUCCESS;

}
