/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tin <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:10:33 by tin               #+#    #+#             */
/*   Updated: 2019/07/11 19:10:35 by tin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while(str[i])
    ft_putchar(str[i]);
}

int char_size(char *src)
{
	int i;

	i =0;
	while (src[i] != '\0')
		i++;
	return (i);
}

void ft_show_tab(struct s_stock_str *par)
{
  int i;
  int size;

  size = char_size(par);
  i = 0;
  while(i < size)
  {
    ft_putstr(par[i].str);
    ft_putchar('\n');
    ft_putstr(par[i].size);
    ft_putchar('\n');
    ft_putstr(par[i].copy);
    ft_putchar('\n');
    i++;
  }
}
