/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochoi <yochoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:14:46 by yochoi            #+#    #+#             */
/*   Updated: 2020/07/17 21:19:14 by yochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		execute_cd(char **tokens, t_env *env)
{
	int		len;
	char	*home;

	home = find_env(env->envd, "HOME");
	len = ft_split_len(tokens);
	if (len == 1)
	{
		chdir(home);
		return (0);
	}
	chdir(tokens[1]);
	return (0);
}