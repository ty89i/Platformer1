#ifndef PLAYER_H
#define PLAYER_H

#include "HH.h"
#include "Sprite.h"

namespace my
{
        class Player
        {
                my::Sprite sprite; // SE

        public:
                // vector that holds pointer to every instance of object
                static std::vector<my::Player*> objects;

                Player( const char* t_sprite_filename );

                void update( float deltaTime ); // movement/animation - should be called every frame

                sf::RectangleShape& getBody(); // getter for sprite.body
                my::Sprite& getSprite(); // SE
        };
}

#endif // PLAYER_H
