/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:25:26 by rrabeari          #+#    #+#             */
/*   Updated: 2024/12/11 11:50:24 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

void	my_put_pixel(int x, int y, int color, t_game *game)
{
	char	*dst;
	t_data	*data;

	data = game->data;
	if (x > WIDTH || y > HEIGHT || x < 0 || y < 0)
		return ;
	dst = data->addr + (y * data->ll + x * data->bpp / 8);
	*(unsigned int*) dst = color;
}

int	clear_hook(int keycode, t_game *game)
{
	(void) keycode;
	clear_image(game);
	return (0);
}

void	clear_image(t_game *game)
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
			my_put_pixel(i, j, 0, game);
			i++;
		}
		j++;
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->data->img, 0, 0);
}
