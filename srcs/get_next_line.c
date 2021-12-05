/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:26:10 by ghorvath          #+#    #+#             */
/*   Updated: 2021/12/05 13:12:32 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "libft.h"
#define BUF_SIZE 4096

int	get_next_line(const int fd, char **line)
{
	int		fd;
	char	**linesaver;

	if (*line)
		return (0);
	//*linesaver = (char **)malloc(sizeof(char *) * BUF_SIZE + 1);
	*linesaver = (char **)malloc(sizeof(char *) * ft_strlen(line) + 1);
	if (!*linesaver)
		return (NULL);
	fd = open(*linesaver, O_RDONLY);
	if (f == -1)
		return (1);
	else
	{
		while (read(fd, &buffer, BUF_SIZE) != 0)
			write(1, &buffer, BUF_SIZE);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	int		fd;
	char	**linesaver[BUF_SIZE + 1];

	if (*line)
		return (0);
	*linesaver = (char **)malloc(sizeof(char *) * BUF_SIZE + 1);
	if (!*linesaver)
		return (NULL);
	fd = open(*linesaver, O_RDONLY);
	if (f == -1)
		return (1);
	else
	{
		while (read(fd, &buffer, BUF_SIZE) != 0)
			write(1, &buffer, BUF_SIZE);
	if (close(fd) == -1)
		return (1);
	return (0);
}
