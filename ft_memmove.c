/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-el- <aben-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:57:52 by aben-el-          #+#    #+#             */
/*   Updated: 2024/11/05 20:22:50 by aben-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
/*int main()
{
     char c[20] = "12346789";
     char b[20] = "abcdefgh";
    ft_memmove(b + 8, c, 8);                        
    printf("%s\n", b);
	///////////////////
    char overlap[20] = "Abdelkarim";
    ft_memmove(overlap + 3,	overlap,10);
    printf("%s\n",overlap);
    return 0;
}*/
