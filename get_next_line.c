/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:12:15 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/13 19:46:22 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_search_line(char *str)
{
	int count;

	count = 0;
	 if(!s)
		 return (0);
	 while(str)
	 {
	 	if(str[count] == '\n')
			return(1);
		count++;
	 }
	 return (0);
}

