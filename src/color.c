/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <rrabeari@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:27:01 by rrabeari          #+#    #+#             */
/*   Updated: 2024/12/11 10:48:47 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

int	get_r(int rgb)
{
	return((rgb >> 16) & 0xFF);
}

int	get_g(int rgb)
{
	return ((rgb >> 8) & 0xFF);
}


int	get_b(int rgb)
{
	return(rgb & 0xFF);
}

int	rgb(int r, int g, int b)
{
	int	value;

	value = 0;
	value = (r << 16) & 0xFF0000;
	value += (g << 8) & 0xFF00; 
	value += b & 0xFF;
	return (value);
}
