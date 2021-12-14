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

#include "get_next_line_bonus.h"

char *put_line(char *s)
{
	int count;
	char *result;

	count = 0;
	if (!s)
		return (NULL);
	while(s[count] && s[count] != '\n')
		count++;
	result = ft_substr(s,0, count + 1);
	return(result);
}

char *get_remind_me(char *str)
{
	char *result;
	int count;
	int len ;

	count = 0;
	len = ft_strlen(str);
	if(!str)
		return(NULL);
	while(str[count] && str[count] != '\n')
		count++;
	if(!str[count] || len == count + 1)
		return(NULL);
	count++;
	result = ft_substr(str, count, len - count);
	free(str);
	if (!result || !len)
		return(free(result), NULL);
	return(result);
}

char *get_result(char **store)
{
	char	*line;

	if (*store && (*store)[0])
	{
		line = put_line(*store);
		*store = get_remind_me(*store);
		return (line);
	}
	if (*store && !(*store)[0])
	{
		free(*store);
		*store = NULL;
	}
	return (NULL);
}

int	has_newline(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char *get_next_line(int fd)
{
	static char	*store[65536];
	char		*buffer;
	char		*temp_store;
	int		ret;

	if (!store[fd])
		store[fd] = ft_strdup("");
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer || fd < 0 || BUFFER_SIZE <= 0 || fd >= MAX_FD)
		return (free(buffer), NULL);
	while (1)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret <= 0)
			break ;
		buffer[ret] = 0;
		temp_store = store[fd];
		store[fd] = ft_strjoin(store[fd], buffer);
		free(temp_store);
		if (has_newline(buffer))
			break;
	}
	free(buffer);
	return (get_result(&(store[fd])));
}

/*
#include <stdio.h>
#include <fcntl.h>
int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int	fd;
	int	fd2;
	int	i;
	char	*result;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while ((result = get_next_line(i % 2 ? fd : fd2)))
	{
		i++;
		printf("%s", result);
	}
	return (0);
}*/
