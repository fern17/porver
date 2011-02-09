#include <iostream>
#include <list>

//SFML
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

//classes
#include "Object.hpp"
#include "ObjectManager.hpp"
#include "Player.hpp"


bool GameOn(sf::RenderWindow &screen, unsigned int level){
    const sf::Input& in = screen.GetInput();

    ObjectManager objManager(screen);
    Player * player = dynamic_cast<Player*>(objManager.AddObject(new Player(in)));


    sf::Event event;
    while(true){
        screen.Clear(sf::Color::Black);

        while(screen.GetEvent(event)){
            if((event.Type == sf::Event::Closed) or (event.Key.Code == sf::Key::Escape))
                screen.Close();
        }
        objManager.Iterate();

        if(player->GetLifes() == 0) return false;

        screen.Display();
    }
    //return true;
}


int main(){
    sf::RenderWindow screen(sf::VideoMode(1024, 768, 32),"porver");

    //
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
