/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-el- <aben-el-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:09:49 by aben-el-          #+#    #+#             */
/*   Updated: 2024/11/04 11:38:53 by aben-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	long	m;

	m = n;
	i = ft_nbrlen(n);
	ptr = malloc((sizeof(char) * (i + 1)));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (m == 0)
		ptr[0] = '0';
	if (m < 0)
	{
		ptr[0] = '-';
		m *= -1;
	}
	while (m != 0)
	{
		ptr[i] = m % 10 + 48;
		m /= 10;
		i--;
	}
	return (ptr);
}
/*int main()
{
	printf("%s\n", ft_itoa(0));
}*/
