/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 09:41:11 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/10 17:15:57 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*mdest;
	char	*msrc;

	mdest = (char *)dest;
	msrc = (char *)src;
	if (src > dest)
		ft_memcpy(dest, src, n);
	if (dest > src)
	{
		while (n > 0)
		{
			mdest[n - 1] = msrc[n - 1];
			n--;
		}
	}
	return (mdest);
}
