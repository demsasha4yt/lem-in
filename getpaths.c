/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getpaths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:35:51 by aromny-w          #+#    #+#             */
/*   Updated: 2019/09/11 19:35:52 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_path	*getpaths(t_farm farm, t_path *init, size_t k)
{
	t_path	*path;
	size_t	i;

	i = -1;
	if (!(path = (t_path *)malloc(sizeof(t_path) * k)))
		terminate(-1);
	while (++i < k)
	{
		path[i].way = NULL;
		path[i].len = 0;
	}
	find_paths(farm, path, init, k);
	return (path);
}
