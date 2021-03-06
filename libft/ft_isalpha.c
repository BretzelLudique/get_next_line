/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 02:36:58 by czhang            #+#    #+#             */
/*   Updated: 2018/11/20 23:32:05 by czhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
