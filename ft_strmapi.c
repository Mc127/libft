/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-el- <aben-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:02:46 by aben-el-          #+#    #+#             */
/*   Updated: 2024/10/31 15:08:10 by aben-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	int				len;
	unsigned int	i;

	len = ft_strlen(s);
	ptr = malloc(sizeof(char *) * len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int main()
{
    char *c = "abcd"; 
    char *result = ft_strmapi(c, to_upper);

    if (result)
    {
        printf("%s\n", result);
    }

    return 0;
}*/
