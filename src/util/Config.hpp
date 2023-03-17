#ifndef CONFIG_HPP
#define CONFIG_HPP
#include <windows.h>
#include "Position.hpp"

// Miscellaneous
#define INVALID '?'


// Handle
HANDLE getInputHandle();
HANDLE getOutputHandle();


// Time
#define TICK_MILLISECONDS 100
#define TICKS_PER_SECOND (1000 / TICK_MILLISECONDS)


// HUD
#define HUD_LENGTH 20
#define HUD_HEIGHT 3


// Level generation
#define LEVEL_MAX_X 200
#define LEVEL_MAX_Y 40

#define GENERATOR_SHORT_PLATFORM_PROBABILITY_DEFAULT 30
#define GENERATOR_VERY_LONG_PLATFORM_PROBABILITY_DEFAULT 30
#define GENERATOR_SHOULD_START_INVERTED_PLATFORMS_DEFAULT 50
#define GENERATOR_STOP_INVERTED_PLATFORMS_DEFAULT 20
#define GENERATOR_SHOULD_START_DOWNWARDS_PLATFORMS_DEFAULT 50
#define GENERATOR_STOP_DOWNWARDS_PLATFORMS_DEFAULT 20
#define GENERATOR_UPPER_PLATFORM_PROBABILITY_DEFAULT 85
#define GENERATOR_POPULATE_PLATFORM_PROBABILITY_DEFAULT 10
#define GENERATOR_SPAWN_ENEMY_INSTEAD_OF_POWERUP_PROBABILITY_DEFAULT 70


// Populator
int getLevelDifficulty(int levelNumber);

int static_enemy_spawn_probability(int difficulty);
int spear_enemy_spawn_probability(int difficulty);
int slow_enemy_spawn_probability(int difficulty);
int shooting_enemy_spawn_probability(int difficulty);
int screaming_enemy_spawn_probability(int difficulty);
int flying_enemy_spawn_probability(int difficulty);
int fast_enemy_spawn_probability(int difficulty);
int chasing_enemy_spawn_probability(int difficulty);

int life_powerup_spawn_probability(int difficulty);
int invincibility_powerup_spawn_probability(int difficulty);
int invisibility_powerup_spawn_probability(int difficulty);
int gun_powerup_spawn_probability(int difficulty);
int spear_powerup_spawn_probability(int difficulty);


// Player
#define PLAYER_CHAR '@'
#define PLAYER_LIFE_DEFAULT 10
Position getPlayerDefaultPosition();
Position getPlayerFirstLevelPosition();
#define PLAYER_JUMP_HEIGHT 3
#define PLAYER_DAMAGE_COUNTDOWN 3


// Damages & points
#define SUFFOCATE_DAMAGE 10
#define BULLET_ENEMY_DAMAGE 5
#define CHASING_ENEMY_DAMAGE 2
#define FAST_ENEMY_DAMAGE 3
#define FLYING_ENEMY_DAMAGE 2
#define SCREAMING_ENEMY_DAMAGE 3
#define SHOOTING_ENEMY_DAMAGE 2
#define SLOW_ENEMY_DAMAGE 3
#define SPEAR_ENEMY_DAMAGE 5
#define STATIC_ENEMY_DAMAGE 2

#define BULLET_ENEMY_POINTS 10
#define CHASING_ENEMY_POINTS 3
#define FAST_ENEMY_POINTS 2
#define FLYING_ENEMY_POINTS 4
#define SCREAMING_ENEMY_POINTS 4
#define SHOOTING_ENEMY_POINTS 4
#define SLOW_ENEMY_POINTS 1
#define SPEAR_ENEMY_POINTS 4
#define STATIC_ENEMY_POINTS 1

#define SPEAR_POWERUP_POINTS 2
#define GUN_POWERUP_POINTS 3
#define INVINCIBILITY_POWERUP_POINTS 2
#define INVISIBILITY_POWERUP_POINTS 1
#define LIFE_POWERUP_POINTS 1

#define NEW_LEVEL_POINTS 25


// Blocks
#define BLOCK_AIR ' '
#define BLOCK_PLATFORM '='
#define BLOCK_BORDER '#'
#define BLOCK_PREV_PORTAL '['
#define BLOCK_NEXT_PORTAL ']'
#define BLOCK_INVALID INVALID


// Enemies
#define CHASING_ENEMY_RANGE 15
#define FLYING_ENEMY_RANGE 25
#define SCREAMING_ENEMY_RANGE 5
#define SHOOTING_ENEMY_RANGE 25
#define BULLET_ENEMY_AWAIT_TICKS 1
#define CHASING_ENEMY_AWAIT_TICKS 2
#define FAST_ENEMY_AWAIT_TICKS 10
#define FLYING_ENEMY_AWAIT_TICKS 3
#define SCREAMING_ENEMY_AWAIT_TICKS 3
#define SHOOTING_ENEMY_AWAIT_TICKS 10
#define SLOW_ENEMY_AWAIT_TICKS 25
#define SPEAR_ENEMY_AWAIT_TICKS 40
#define STATIC_ENEMY_AWAIT_TICKS 1

#define STATIC_ENEMY_CHAR 'H'
#define SLOW_ENEMY_CHAR 'S'
#define FAST_ENEMY_CHAR 'Z'
#define FLYING_ENEMY_CHAR 'V'
#define CHASING_ENEMY_CHAR 'A'
#define SHOOTING_ENEMY_CHAR 'F'
#define SPEAR_ENEMY_CHAR 'N'
#define SCREAMING_ENEMY_CHAR 'O'
#define SCREAMING_ENEMY_LEFT_SCREAM_CHAR '('
#define SCREAMING_ENEMY_RIGHT_SCREAM_CHAR ')'
#define BULLET_ENEMY_CHAR '*'


// Powerups
#define GUN_BULLETS 6
#define SPEAR_DURABILITY 1
#define INVINCIBILITY_DURATION 10
#define INVISIBILITY_DURATION 10
#define LIFE_INCREASE 5

#define SPEAR_POWERUP_CHAR '-'
#define GUN_POWERUP_CHAR 'f'
#define INVINCIBILITY_POWERUP_CHAR 'x'
#define INVISIBILITY_POWERUP_CHAR '&'
#define LIFE_POWERUP_CHAR '+'


// Colors
#define COLOR_TEXT (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY)
#define COLOR_GRAY FOREGROUND_INTENSITY
#define COLOR_LIGHT_GRAY (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED)
#define COLOR_WHITE_TILE ((FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY) | (BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY))
#define COLOR_PLAYER (FOREGROUND_RED | FOREGROUND_GREEN)
#define COLOR_PLAYER_INVISIBLE (COLOR_PLAYER | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED)
#define COLOR_PLAYER_INVINCIBLE (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define COLOR_PLAYER_INVISIBLE_AND_INVINCIBLE (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED)
#define COLOR_PLAYER_DAMAGED FOREGROUND_RED
#define COLOR_ENTITY (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define COLOR_POWERUP FOREGROUND_GREEN
#define COLOR_HUD (BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED)

#define COLOR_AIR 0
#define COLOR_PLATFORM (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED)
#define COLOR_BORDER COLOR_TEXT
#define COLOR_PREV_PORTAL (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define COLOR_NEXT_PORTAL (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY)
#define COLOR_INVALID FOREGROUND_RED


// Commands
struct Commands {
	char upCommand;
	char jumpCommand;
	char downCommand;
	char leftCommand;
	char rightCommand;
	char useCommand;
	char escCommand;
};


// Default command set
#define DEFUALT_COMMAND_UP 'W'
#define DEFUALT_COMMAND_JUMP ' '
#define DEFUALT_COMMAND_DOWN 'S'
#define DEFUALT_COMMAND_LEFT 'A'
#define DEFUALT_COMMAND_RIGHT 'D'
#define DEFUALT_COMMAND_USE 'E'
#define DEFUALT_COMMAND_ESC ((char) 27)

Commands getDefaultCommands();

#endif /* CONFIG_HPP */