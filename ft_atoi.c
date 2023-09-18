/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:57:50 by febasma           #+#    #+#             */
/*   Updated: 2023/09/18 20:04:34 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    
    while( str[i] != '\0')
    {
        if(str[i] < 48 || str[i] > 57)
            return (0);

        if(str[i] >= 48 && str[i] <= 57)
        {
            str[i] += 0;
            i++;
        }
    }
    printf("%s", str);
    return(0);

}

int main()
{
    char str[] = "-4156";
    int i = ft_atoi(str);
    printf("%i", i);
    return (0);
}