/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:01:22 by jrichard          #+#    #+#             */
/*   Updated: 2017/01/17 01:21:19 by jrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isalpha(int c)
{
	return (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0);
}

static	int	ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

int			ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}
