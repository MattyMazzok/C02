/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 03:00:28 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 03:06:02 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' && str[i] >= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
