/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkorhan <rkorhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:29:31 by rkorhan           #+#    #+#             */
/*   Updated: 2023/08/01 16:20:55 by rkorhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	i = 0;
	if (size == 0 || size <= d)
		return (size + s);
	while (src[i] != '\0' && i < size - d - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
