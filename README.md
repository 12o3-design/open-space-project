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
