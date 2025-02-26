
#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "libs/libft/libft.h"
#include "libs/gnl/get_next_line.h"
#include "libs/printf.a/ft_printf.h"


typedef struct s_game
{
	void    *mlx;
	void    *win;
	int     map_width;
	int     map_height;
}	t_game;

void	init_game(t_game *game); 

#endif