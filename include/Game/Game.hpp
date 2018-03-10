/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Game.hpp
*/

#pragma once

#include <memory>

#include "Engine/System/Event.hpp"
#include "Engine/Window/Window.hpp"

namespace arcade
{
	class Game
	{
	public:
		Game() = default;
		virtual ~Game() = default;

		Game(Game const &) = delete;
		Game(Game &&) = default;

		Game &operator=(Game const &) = delete;
		Game &operator=(Game &&) = default;

		/**
		 * \brief Handle event.
		 * \param Event event
		 */
		virtual void handleEvent(engine::Event const &event) = 0;

		/**
		 * \brief Update the game. This function should have no effect
		 *        when the game is paused.
		 */
		virtual void update() = 0;

		/**
		 * \brief Pause the game.
		 */
		virtual void pause() = 0;

		/**
		 * \brief Resume the game.
		 */
		virtual void resume() = 0;

		/**
		 * \brief Quit the game. The game is not required to quit
		 *        instantly (eg. display a confirmation menu).
		 */
		virtual void quit() = 0;

		/**
		 * \brief Tell whether or not the game is paused.
		 * \return bool
		 */
		virtual bool isPaused() const = 0;

		/**
		 * \brief Tell whether or not the game is running. If not, the
		 *        window should close itself.
		 * \return bool
		 */
		virtual bool isRunning() const = 0;

		/**
		 * \brief Draw each game object into the render window.
		 * \param Window window
		 */
		virtual void render(std::unique_ptr<engine::Window> &window) const = 0;
	};
}
