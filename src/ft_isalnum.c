/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:19:10 by thopgood          #+#    #+#             */
/*   Updated: 2024/07/16 21:36:34 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Returns true if char is alpha or num(digit)
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
