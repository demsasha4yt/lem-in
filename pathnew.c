/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pathnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:35:32 by aromny-w          #+#    #+#             */
/*   Updated: 2019/09/17 17:35:33 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_path	pathnew(t_way *way, size_t len)
{
	t_path	path;

	path.way = way;
	path.len = len;
	return (path);
}
