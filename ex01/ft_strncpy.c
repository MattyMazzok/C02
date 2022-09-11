/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazzocc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:41:39 by mmazzocc          #+#    #+#             */
/*   Updated: 2022/09/10 11:22:47 by mmazzocc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char*	strncpy(char* dest, char* src, unsigned int  n)
{
    char*	tmp
	tmp = dest;
 
    while (*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
 
    *dest = '\0';
 
    return (tmp);
}

