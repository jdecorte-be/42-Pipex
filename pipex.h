#ifndef PIPEX_H
# define PIPEX_H

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>  
#include <stdlib.h>
# define STDIN 0
# define STDOUT 1
# define STDERR 2

typedef struct s_pipex
{
	int     fd1;
    int     fd2;
    char    **av;
    char    **env;
    char    **s_env;
    char    **cmdac;
    int *p_fd;
}		t_pipex;

void ft_exec(char **cmd);

#endif // !PIPEX_H