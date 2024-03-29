/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeham <yeham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:37:17 by yeham             #+#    #+#             */
/*   Updated: 2022/07/12 22:08:36 by yeham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*sc;

	if (s == 0)
		return (0);
	i = 0;
	sc = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (sc == NULL)
		return (0);
	while (i < ft_strlen(s))
	{
		sc[i] = f(i, s[i]);
		i++;
	}
	sc[i] = '\0';
	return (sc);
}
