/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Color.hpp
*/

#pragma once

#include <cstdint>

namespace engine
{
	union Color
	{
		struct
		{
			std::uint8_t r;
			std::uint8_t g;
			std::uint8_t b;
			std::uint8_t a;
		};

		std::uint32_t rgba;
	};
}
