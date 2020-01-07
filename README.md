# Colonize-Pirkanmaa
My biggest school project with C++ yet (Programming 3: Techniques). The aim of this project was to practice working in a coding team. The files in the Game-folder were implemented by us and the Course-folder is a submodule that was made by course's personnel.

This project was done with Niklas Nurminen (his GitHub: https://github.com/nilkkiz). Check out our division of labor from the documentation.

# About the game
After player names are given and Play-button is pressed, the game starts. As you can now see, there are different kinds of tiles in the map:
 - Water (blue)
 - Sand (yellow)
 - Forest (dark green) 
 - Grassland (light green)
 - Rock (gray)
 Each tile type generates a different amount of each resource:
 - Money
 - Food
 - Wood
 - Stone
 - Ore
 
 Building, that can be placed on tiles are:
 - Headquarters
 - Outpost
 - Farm
 - Mine 
 - Oil rig
 
 Each building has a poteintial to generate a different amount of recources depending on the building type. To actually generate recources, you must place worker(s) on a builiding. There are 3 type of workers in the game:
 - Basic worker (produces every recource)
 - Farmer (skilled at producing food)
 - Miner (skilled at producing stone and ore)
 
 Read the documetation for more information.
 
# How to play
Start off by naming 1-4 players. If names are given correctly, the input field's backround will be green, if not it will be red. You can read Pirkanmaa's epic backround story by clicking the Lore-button at the dialog. 

After player names are set and Play-button is pressed, the game itself starts. Each player must start by placing (drag & drop) their headquarters somewhere. After placing his/hers HQ, the player can place other buildings within three-tile radius on the HQ. In other words, the player owns the tiles. Once ownership to a tile in claimed, it can't reclaimed by another player's HQ. To produce recources, a player must place workers on a building; buildings alone produce nothing. Pressing the "End turn" changes player's turn.

The winner is declared after 10 rounds and the player with the most money wins (I know boring but we were kinda lazy and it didn't affect the grade).

# While doing this I learned to....
 - Design and implement a bit more complicated GUI using Qt and C++ 
 - Use version control properly and work in a coding team
 - Use inheritance with abstract baseclasses and virtual functions
 - Use submodules
 - Handle errors (throw and catch)
