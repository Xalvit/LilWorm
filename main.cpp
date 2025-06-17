#include "Worm.h"

int main()
{
	Worm worm;
	while (worm.isWindowOpen())
	{
		worm.pollEvent();
		worm.update();
		worm.render();
	}

	return 0;
}