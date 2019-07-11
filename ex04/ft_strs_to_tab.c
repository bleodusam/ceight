/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tin <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:10:23 by tin               #+#    #+#             */
/*   Updated: 2019/07/11 19:10:24 by tin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "ft_stock_str.h"

int char_size(char *src)
{
	int i;

	i =0;
	while (src[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
  t_stock_str *output;
  int i;

  output = NULL;
  if((output = malloc(sizeof(t_stock_str) * ac)) == NULL)
    return (NULL);
  i = 0;
  while(i < ac)
  {
    output[i].size = malloc(sizeof(int)))
    output[i].size = char_size(av[i]);
    output[i].str = malloc(sizeof(av[i]));
    output[i].copy = malloc(sizeof(av[i]));
    output[i].str = av[i];
    output[i].copy = output[i].str;
    i++;
  }
  output[i].size = 0;
  output[i].str = '\0';
  output[i].copy = '\0';
  return (output);
}
