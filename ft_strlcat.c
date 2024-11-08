/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-el- <aben-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:21:38 by aben-el-          #+#    #+#             */
/*   Updated: 2024/11/08 20:45:22 by aben-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	k = 0;
	if (size <= i)
		return (size + j);
	while (src[k] && (i + k < size - 1))
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}
/*int main()
{
	char src[10] = "abcderr";
	char dest[10] = "efgh";
	printf("%ld\n", ft_strlcat(dest, src, 4));
	printf("%s\n", dest);
}*/
