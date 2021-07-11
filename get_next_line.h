/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:52:41 by wpersimm          #+#    #+#             */
/*   Updated: 2020/11/18 17:17:45 by wpersimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_bufersize(long int i);
int		ft_newline(char *buf, int a);
char	*ft_strdupper(char *buf);
char	*ft_strduplic(char *buf);
char	*ft_strjoin(char *s1, char *s2);

#endif
