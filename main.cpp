#include <iostream>
#include <list>

//SFML
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

//classes
#include "Object.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "Bubble.hpp"


bool GameOn(sf::RenderWindow &screen, unsigned int level){
    const sf::Input& in = screen.GetInput();

    Game gameManager(screen);
    Player * player = dynamic_cast<Player*>(gameManager.AddObject(new Player(in,gameManager)));

    sf::Event event;

    for (unsigned int i = 0 ; i < level ; i ++)
    {
		gameManager.AddObject(new Bubble(i*160+160, 160, 5-level, (level%4) + 3, (level%5) + 2,gameManager));
    }

    while(true){

        screen.Clear(sf::Color::Black);

        while(screen.GetEvent(event)){
            if((event.Type == sf::Event::Closed) or (event.Key.Code == sf::Key::Escape)){
                screen.Close();
                return EXIT_SUCCESS;
		}
        }

        gameManager.Iterate();
		gameManager.RemoveAtQueue();

        unsigned int cantBurbujas = gameManager.BubbleCount();

        if(cantBurbujas == 0) //termina el nivel CAMBIAR ESTOOOOOOOOOOOOOOOOOOOOOOOOOOOO A 0
            return true;

        if(player->GetLifes() == 0) //perdiste
            return false;

        screen.Display();
    }

}


int main(){
    sf::RenderWindow screen(sf::VideoMode(1024, 768, 32),"porver");
	screen.SetFramerateLimit(30);
    //
    unsigned int level = 1;
    while (screen.IsOpened()){

        while(GameOn(screen,level)){

            level++;
        }
        //mensaje de you lost

    }
    screen.Close();
    return EXIT_SUCCESS;

}
