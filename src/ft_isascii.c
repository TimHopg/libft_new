/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:37:59 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/23 15:18:12 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Returns true if char is ASCII char

*/

#include "../include/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}