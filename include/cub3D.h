/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:23:45 by rrabeari          #+#    #+#             */
/*   Updated: 2024/12/11 11:49:40 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <unistd.h>
# include <stdlib.h>
# include "../mlx/mlx.h"
# include <math.h>
# define WIDTH 1920
# define HEIGHT 720


typedef struct s_data
{
	void 	*img;
	char	*addr;
	int		bpp;
	int		ll;
	int		endian;
}	t_data;

typedef struct s_game
{
	void	*mlx;
	void	*mlx_win;
	t_data	*data;
}	t_game;

void	init_data(t_data *data, void *mlx);
void	init_game(t_data *data, t_game *game, void *mlx, void *mlx_win);
void	my_put_pixel(int x, int y, int color, t_game *game);
void	clear_image(t_game *game);
int		clear_hook(int keycode, t_game *game);

int	get_r(int rgb);
int	get_b(int rgb);
int	get_b(int rgb);
int	rgb(int r, int g, int b);

#endif