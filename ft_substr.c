/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:38:39 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/10 15:56:26 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ERRADO

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		j;

	j = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (len && s[start])
	{
		ptr[j] = s[start];
		start++;
		j++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}
