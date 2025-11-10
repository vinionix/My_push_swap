/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfidelis <vfidelis@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:20 by vfidelis          #+#    #+#             */
/*   Updated: 2025/01/02 18:14:30 by vfidelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize(t_list **lst, char **arg, int argc)
{
	long	num;
	long	i;

	i = 0;
	num = 0;
	if (!*arg || *arg == NULL)
	{
		ft_error(0);
		free(arg);
		exit(1);
	}
	while (arg[i])
	{
		num = ft_atoi(arg[i++]);
		if (ft_valid(*lst, ft_last_lst(*lst), num) == 0)
		{
			ft_error(0);
			if (argc == 2)
				ft_free(arg);
			free_lst(lst);
			exit(1);
		}
		else
			ft_lstadd_back(lst, ft_lstnew((int)num));
	}
}
