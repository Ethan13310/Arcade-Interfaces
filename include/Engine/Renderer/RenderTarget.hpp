/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         RenderTarget.hpp
*/

#pragma once

namespace engine
{
	class RenderTarget
	{
	public:
		RenderTarget() = default;
		virtual ~RenderTarget() = default;

		RenderTarget(RenderTarget const &) = delete;
		RenderTarget(RenderTarget &&) = default;

		RenderTarget &operator=(RenderTarget const &) = delete;
		RenderTarget &operator=(RenderTarget &&) = default;

		// Implementation is up to you...
	};
}
