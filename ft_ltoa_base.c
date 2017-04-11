/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 22:39:50 by jrichard          #+#    #+#             */
/*   Updated: 2017/04/11 22:42:33 by jrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*create_basetab(int base, char notation)
{
	char				*basetab;
	int					i;
	char				c;

	i = 0;
	c = '0';
	if (!(basetab = ft_memalloc((base + 1) * sizeof(*basetab))))
		return (NULL);
	while (i < base)
	{
		basetab[i++] = c++;
		if (c == '9' + 1)
		{
			if (notation == 0)
				c = 'a';
			else
				c = 'A';
		}
	}
	return (basetab);
}

static int				count_size(unsigned long long nb, int base)
{
	int					i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= base;
		++i;
	}
	return (i);
}

static void				convert_base(char *ret, char *basetab,
		unsigned long long nb, int size_ret)
{
	int					base;

	base = ft_strlen(basetab);
	if (nb == 0)
	{
		ret[0] = '0';
		return ;
	}
	while (nb)
	{
		ret[size_ret] = basetab[nb % base];
		--size_ret;
		nb /= base;
	}
}

char					*ft_ltoa_base(long long nb, int base, char notation)
{
	char				*basetab;
	int					size_ret;
	char				*ret;
	unsigned long long	nb2;

	size_ret = 0;
	if (base == 10)
		return (ft_ltoa(nb));
	else if (base > 1 && base < 36)
	{
		nb2 = (unsigned long long)nb;
		if (!(basetab = create_basetab(base, notation)))
			return (NULL);
		size_ret += count_size(nb2, base);
		if (!(ret = ft_memalloc((size_ret + 1) * sizeof(*ret))))
			return (NULL);
		convert_base(ret, basetab, nb2, size_ret - 1);
		return (ret);
	}
	return (NULL);
}
