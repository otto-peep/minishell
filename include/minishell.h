#ifndef MINISHELL_H

# define MINISHELL_H

#include "../libft/libft.h"
#include <signal.h>
#include <stdlib.h>

typedef struct		s_env
{
	char			*gnl_input;
	char			**prompt;
	int				gnl_ret;
}					t_env;


void	ft_error(char *str);
void	parser(t_env *s);

#endif
