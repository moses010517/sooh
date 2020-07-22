/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooh </var/mail/sooh>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:03:25 by sooh              #+#    #+#             */
/*   Updated: 2020/07/22 20:10:57 by sooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a += 1;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[a + b] = src[b];
		b += 1;
	}
	dest[a + b] = '\0';
	return (dest);
}
