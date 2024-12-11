/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:02:57 by rrabeari          #+#    #+#             */
/*   Updated: 2024/12/11 10:25:00 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

void	init_data(t_data *data, void *mlx)
{
	data->img = mlx_new_image(mlx, WIDTH, HEIGHT);
	data->addr = mlx_get_data_addr(data->img, &data->bpp, &data->ll, &data->endian);
}

void	init_game(t_data *data, t_game *game, void *mlx, void *mlx_win)
{
	game->data = data;
	game->mlx = mlx;
	game->mlx_win = mlx_win;
}
