/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:57:16 by cormund           #+#    #+#             */
/*   Updated: 2019/09/13 10:38:34 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fl_visualizer.h"

void		destroy_init(t_vis *vis)
{
	// TTF_CloseFont(font);
	// TTF_CloseFont(font);
	// SDL_DestroyTexture(tex);
	// SDL_DestroyTexture(tex_count);
	SDL_DestroyRenderer(vis->ren);
	SDL_DestroyWindow(vis->win);
	SDL_Quit();
	TTF_Quit();
}

void		init(t_game *game)
{
	t_vis	*vis;

	if (!(vis = (t_vis *)ft_memalloc(sizeof(t_vis))))
		error(strerror(errno));
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0)
		error(SDL_GetError());
	if (TTF_Init() < 0)
		error(TTF_GetError());
	vis->win = SDL_CreateWindow("Cormund's Filler", SDL_WINDOWPOS_CENTERED,\
	SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (!vis->win)
		error(TTF_GetError());
	if (!(vis->ren = SDL_CreateRenderer(vis->win, -1, 0)))
		error(TTF_GetError());
	vis->keyState = SDL_GetKeyboardState(NULL);
	game->vis = vis;
}