# Open Space Project

## Project Goals
* Realistic Newtonian physics
* Large, procedurally-generated universe
* Variety of quests and Goals

## Current Version (0.0.1a)
* Things draw on the screen now
* Yay

## Draw X/Y separate from physics X/Y
Due to the scale of the universe I'm building, the player needs to be free to zoom in and out at will. As such, the physics calculations and object position will be calculated based on an underlying coordinate system that gets scaled by a zoom factor before objects are drawn.

## Physics woes
As it turns out, SDL takes the texture rotation argument as a double representing degrees, that follows a typical compass layout (0 degrees is straight upward and it increments clockwise). This is frustrating because radians are clearly a better and more intuitive system, not to mention that the taylor approximations of sine and cosine are based on using radians. Clearly, SDL is in the wrong here and radians are a superior choice.
