/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:23:25 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/10 10:40:36 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *destinazione, char *sorgente)
{
	char	*tmp;

	*tmp = destinazione;
	while (*sorgente != '\0')
	{
		*destinazione = *sorgente;
		destinazione++;
		sorgente++;
	}
	*destinazione = '\0';
	return (tmp);
}
