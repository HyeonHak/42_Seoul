/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:54:38 by hyejo             #+#    #+#             */
/*   Updated: 2020/03/02 02:17:06 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int get_next_line(int fd, char **line)
{
    static char *memory[255];
    char        *buffer;
    char        *tmp;
    int         len;

    while ((len = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        //if buffer[i] == '\n'
        //line = buffer[0] ~ buffer[i]
        //memory[fd] = buffer[i + 1] ~ buffer[len]
        tmp = ft_strjoin(memory[fd], buffer);
        free(memory[fd]);
        memory[fd] = tmp;
    }
}

int main(void)
{
    int     fd;
    int     fd2;
    char    *BUF;
    
    fd = open("./test.txt",O_RDONLY);
    fd2 = open("./test2.txt",O_RDONLY);
   // while (1)
    //{
        if(get_next_line(fd, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        if(get_next_line(fd2, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        if(get_next_line(fd, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        if(get_next_line(fd2, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        if(get_next_line(fd, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        if(get_next_line(fd2, &BUF) != 0)
        {
            write(1, BUF, BUFFER_SIZE);
        }
        
        
      //  else
        //    break ;
    //}
    
    close(fd);
    close(fd2);
    return (0);
    
}