/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:30:03 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:58:37 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	all_alpha;
	int	i;

	all_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			all_alpha = 0;
		}
		i++;
	}
	return (all_alpha);
}
