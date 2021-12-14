/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:12:15 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/13 18:28:22 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(const char *src)
{
        char    *new;
        int             i;

        i = 0;
        new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (!new)
                return (NULL);
        while (src[i])
        {
                new[i] = src[i];
                i++;
        }
        new[i] = '\0';
        return (new);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  i;
        char    *sub;

        i = 0;
        if (!s)
                return (NULL);
        if (start >= ft_strlen(s))
                return (ft_calloc(1, sizeof(char)));
        if (len > ft_strlen(s))
                len = ft_strlen(s);
        sub = (char *)malloc(sizeof(char) * (len + 1));
        if (!sub)
                return (NULL);
        while (s[start] && i < len)
                sub[i++] = s[start++];
        sub[i] = '\0';
        return (sub);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		s1_len;
	size_t		s2_len;
	size_t		str_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_len = s1_len + s2_len;
	str = (char *)malloc((str_len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[str_len] = '\0';
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy(str + s1_len, s2, s2_len + 1);
	return (str);
}

