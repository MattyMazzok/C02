/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:50:58 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:52:03 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	all_uppercase;
	int	i;

	all_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'A' && str[i] >= 'Z')
		{
			all_uppercase = 0;
		}
		i++;
	}
	return (all_uppercase);
}
