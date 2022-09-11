/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:53:37 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:56:45 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	all_printable;
	int	i;

	all_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '32' && str[i] >= '127')
		{
			all_printable = 0;
		}
		i++;
	}
	return (all_printable);
}
