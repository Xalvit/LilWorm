#pragma once

#include "Ball.h"

class Worm
{
private:
	// variables
	float BallRadius;
	int BallSpawnCD;
	int BallSpawnCDMax;
	int BallDeleteCD;
	int BallDeleteCDMax;
	int WormMaxLength;

	std::list<Ball> WormBody;

	// window variables
	sf::RenderWindow* window;
	sf::Event event;

	// funct
	void initVariables();
	void deleteNSpawnBall();
	void initWindow();
	void spawnBall();
	sf::Vector2i GetMousePos();
public:
	// const & destr
	Worm();
	~Worm();
	// accessors	
	bool isWindowOpen() const;


	// functions
	void update();
	void render();
	void pollEvent();
};