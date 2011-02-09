#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Object.hpp"

#include <list>
bool GameOn(sf::RenderWindow &screen, unsigned int level){
    while(true){
        screen.Clear(sf::Color::Black);
        sf::Event event;

        while(screen.GetEvent(event)){
            //if((event.EventType == sf::Event::Closed) or (event.Key.Code == sf::Key::Escape))
                return false;
        }

        screen.Display();
    }
}


int main(){
    sf::RenderWindow screen(sf::VideoMode(1024, 768, 32),"porver");

    //const sf::Input& in = screen.GetInput();
    unsigned int level = 0;
    while (screen.IsOpened()){
        while(GameOn(screen,level)){
            level++;
        }
        //mensaje de you lost

    }
    screen.Close();
    return EXIT_SUCCESS;

}
