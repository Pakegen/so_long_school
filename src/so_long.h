/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:49:00 by quenalla          #+#    #+#             */
/*   Updated: 2024/10/10 13:12:44 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../utils/libft/libft.h"
# include "../minilibx-linux/mlx.h"

//struct

typedef struct s_map
{
	void	*map;
}	t_map;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*player;
	void	*p_x;
	void	*p_y;
	t_map	*map;
}	t_data;


//INPUt

# define KEY_W =
# define KEY_A =
# define KEY_S =
# define KEY_D =
# define ARROW_UP =
# define ARROW_LEFT =
# define ARROW_DOWN =
# define ARROW_RIGHT =
# define ESC = 65307

//FOR THE MAP BER

# define WALL = 1
# define COLLECTIBLE = C
# define NOTHING = 0
# define START_POSITION = P
# define EXIT = E

#endif
