/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:42:17 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:44:00 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	all_numeric;
	int	i;

	all_numeric = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' && str[i] >= '9')
		{
			all_numeric = 0;
		}
		i++;
	}
	return (all_numeric);
}
