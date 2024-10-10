/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:48:54 by quenalla          #+#    #+#             */
/*   Updated: 2024/10/10 13:09:28 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	so_long(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	if (!mlx)
		return ;
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
	if (!mlx_win)
		return ;
	mlx_loop(mlx);
}

/*void	*mlx_xpm_file_to_image(void *mlx_ptr, char *"../ressource/grey.xpm", int *width, int *height);
*/

int	main(void)
{
	so_long();
	return (0);
}
