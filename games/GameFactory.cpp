/*
 * GameFactory.cpp
 *
 *  Created on: 04.10.2016
 *      Author: hd
 */

#include "GameFactory.h"
#include "Screensaver/Screensaver.h"
#include "Life/GameOfLife.h"
#include "Test/TestScreen.h"
#include "Paint/Paint.h"

IGame* GameFactory::createGame(Game game, FlipdotGfx &gfx)
{
	switch (game)
	{
		case Game::TESTSCREEN:
			return new TestScreen(gfx);

		case Game::GAME_OF_LIFE:
			return new GameOfLife(gfx);

		case Game::PAINT:
			return new Paint(gfx);

		case Game::SCREENSAVER:
		default:
			return new Screensaver(gfx);
	}
}

