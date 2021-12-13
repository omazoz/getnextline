/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:18:45 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/13 18:06:36 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// int strline(char*str)
// {
// 	int i;

// 	i = 0;
// 	while(str[i] != '\n')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*sub;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	if (start >= ft_strline(s))
// 		return (ft_calloc(1, sizeof(char)));
// 	if (len > ft_strline(s))
// 		len = ft_strlen(s);
// 	sub = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!sub)
// 		return (NULL);
// 	while (s[start] && i < len)
// 		sub[i++] = s[start++];
// 	sub[i] = '\0';
// 	return (sub);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char		*str;
// 	size_t		s1_len;
// 	size_t		s2_len;
// 	size_t		str_len;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	s1_len = ft_strline(s1);
// 	s2_len = ft_strline(s2);
// 	str_len = s1_len + s2_len;
// 	str = (char *)malloc((str_len + 1) * sizeof(char));
// 	if (!str)
// 		return (0);
// 	str[str_len] = '\0';
// 	ft_strlcpy(str, s1, s1_len + 1);
// 	ft_strlcpy(str + s1_len, s2, s2_len + 1);
// 	return (str);
// }

// int main(void)
// {
// 	char *result;

// 	result = get_next_line(0);
// 	printf("%s\n", result);
// 	return (0);
// }

