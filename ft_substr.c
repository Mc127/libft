/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-el- <aben-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:58:43 by aben-el-          #+#    #+#             */
/*   Updated: 2024/11/07 14:31:50 by aben-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	max_len;
	size_t	slen;

	max_len = ft_strlen(s + start);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > max_len)
		len = max_len;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// return (ft_strdup(""));emty strring to free
/*int main()
{
	char c[20] = "gsdfjgskd";
	// char b[20];
	printf("%s\n", ft_substr(c ,5 , 1000000));
}*/
