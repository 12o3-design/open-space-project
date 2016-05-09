# Open Space Project

## Project Goals
* Realistic Newtonian physics
* Large, procedurally-generated universe
* Variety of quests and Goals

## Current Version (0.0.2a)
* Ship is flyable! Use the W key to accelerate forward, and the A and D keys to rotate left and right. Watch the current gameplay demo video (here!)[https://www.youtube.com/watch?v=7-QMCRg77v4]

## Physics Units
Because one of the main goals of the project the ability to scroll to zoom in and out with the mouse wheel, the physics system requires having a system of units that is separate from the underlying pixels of the screen (not to mention that I should probably start thinking about high resolution screens...) to make sure things get drawn properly.

This unit will be based on a single pixel when the game is at standard zoom level. This will be the fundamental unit of the physics system as well as the underlying coordinate system.
