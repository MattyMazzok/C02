/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:48:09 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/11 02:49:57 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	all_lowercase;
	int	i;

	all_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' && str[i] >= 'z')
		{
			all_lowercase = 0;
		}
		i++;
	}
	return (all_lowercase);
}
