/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:58:38 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/13 13:58:44 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*store = NULL;
	char		*buffer;
	char		*result;
	int			ret;

	result = NULL;
	if (!store)
		store = ft_strdup("");
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (!result)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		buffer[ret] = 0;
	}
	return (result);
}

int main(void)
{
	char *result;

	result = get_next_line(0);
	printf("%s\n", result);
	return (0);
}
