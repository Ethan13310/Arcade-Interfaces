/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Event.hpp
*/

#pragma once

#include <cstddef>
#include <cstdint>

#include "Keyboard.hpp"
#include "Joystick.hpp"

namespace engine
{
	enum class EventType
	{
		// Invalid event
		None,

		// The OS has requested the program to close
		Closed,

		// The window has been resized
		Resized,

		// The window has lost focus
		// Can be used to pause the game
		LostFocus,

		// The window has gained focus
		GainedFocus,

		// A printable key combinaison has been pressed
		TextEntered,

		// A key has been pressed or released
		KeyPressed,
		KeyReleased,

		// A joystick button has been pressed
		JoystickButtonPressed,
		JoystickButtonReleased,

		// One of the joystick's axes has been moved
		JoystickMoved
	};

	struct KeyEvent final
	{
		KeyCode code;
		bool alt;
		bool control;
		bool shift;
		bool system;
	};

	struct JoystickButtonEvent final
	{
		unsigned button;
	};

	struct JoystickMoveEvent final
	{
		JoystickAxis axis;
		float poisition; // Interval: [-1.0, 1.0]
	};

	struct ResizeEvent final
	{
		std::size_t width;
		std::size_t height;
	};

	struct TextEvent final
	{
		std::uint32_t unicode;
	};

	struct Event final
	{
		EventType type{ EventType::None };

		union {
			// Joystick
			JoystickButtonEvent joystickButton;
			JoystickMoveEvent joystickMove;

			// Keyboard
			KeyEvent key;
			TextEvent text;

			// Window
			ResizeEvent resize;
		};
	};
}
