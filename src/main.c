/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:26:49 by rrabeari          #+#    #+#             */
/*   Updated: 2024/12/11 11:49:59 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"


void	draw_cercle(int r, int x, int y, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < HEIGHT)
	{
		i = 0;
		while (i < WIDTH)
		{
			if (i >= (x - r) && i <= (x + r) && j >= (y - r) && j <= (y + r))
			{
				if (i == sqrt(pow(r, 2) - pow(j - y, 2)) + x)
					my_put_pixel(i, j, rgb(255,255,255), game);
				if (j == sqrt(pow(r, 2) - pow(i - x, 2)) + y)
					my_put_pixel(i, j, rgb(255,255,255), game);
			}
			i++;
		}
		j++;
	}
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	data;
	t_game	game;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, WIDTH, HEIGHT, "cub3D");
	init_data(&data, mlx);
	init_game(&data, &game, mlx, mlx_win);
	draw_cercle(20, WIDTH/2, HEIGHT/2, &game);
	mlx_put_image_to_window(game.mlx, game.mlx_win, data.img, 0, 0);
	mlx_hook(mlx_win, 2, 1L<<0, clear_hook, &game);
	mlx_loop(mlx);
}