/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:54:38 by hyejo             #+#    #+#             */
/*   Updated: 2020/03/06 01:45:36 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int div_line(char **line, char **memory, int fd, int idx)
{
    char    *tmp;
    
    if(memory[fd] == NULL)
    {
        line[0] = malloc(1);
        if (line[0] == NULL)
            return (-1);
        line[0][0] = 0;
        return (0);
    }
	while(memory[fd][idx])
	{
		if (memory[fd][idx] == '\n')
		{
			line[0] = ft_strcut(memory[fd], 0, idx);
            tmp = ft_strdup(memory[fd] + idx + 1);
            if (line[0] == NULL || tmp == NULL)
                return (-1);
			free(memory[fd]);
			memory[fd] = tmp;
			return (1);
		}
		idx++;
	}
    line[0] = ft_strdup(memory[fd]);
    if (line[0] == NULL)
        return (-1);
    free(memory[fd]);
    memory[fd] = NULL;
    return (0);
}

void    read_memory(char **memory, int fd, char *buffer)
{
    char *tmp;
    
    if (memory[fd] == NULL)
        memory[fd] = ft_strdup(buffer);
    else
    {
        tmp = ft_strjoin(memory[fd], buffer);
        free(memory[fd]);
        memory[fd] = tmp;
    }
}

int get_next_line(int fd, char **line)
{
    static char *memory[SLOT];
    char        buffer[BUFFER_SIZE + 1];
    int         len;
    int         idx;
    
    if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
        return (-1);
    idx = -1;
    if(memory[fd])
        while (memory[fd][++idx])
            if (memory[fd][idx] == '\n')
              return(div_line(line, memory, fd, idx));
    while ((len = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[len] = '\0';
        idx = -1;
        read_memory(memory, fd, buffer);
        while (buffer[++idx])
            if (buffer[idx] == '\n')
                return (div_line(line, memory, fd, idx));
	}
    if (len < 0)
        return (-1);
    return (div_line(line, memory, fd, 0));
}