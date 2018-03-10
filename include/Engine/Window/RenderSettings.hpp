/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         RenderSettings.hpp
*/

#pragma once

#include <cstddef>

namespace engine
{
	struct RenderSettings final
	{
		// Render resolution
		std::size_t width;
		std::size_t height;

		// Enable fullscreen
		bool fullscreen;
	};
}
