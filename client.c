
#include "ft_minitalk.h"

static int ft_pid_is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int ft_string_is_valid(char *str)
{
	if (str == NULL || ft_strlen(str) == 0 || ft_strlen(str) > 1000)
		return (0);
	return (1);
}

static void send_string(int server_pid, char* str)
{
    int		cnt;
	char	chr;

	while (*str != '\0')
	{
		cnt = 8;
		chr = *str++;
		while (cnt--)
		{
			//it will take next bit of the char, example char a its 0000 0001 when I use >> im doing it 0000 0010, so I`m always
			//picking up the next bit and validating if it is 0 or 1 and sending by a signal.
			if (chr >> cnt & 1)
				kill(server_pid, SIGUSR2);
			else
				kill(server_pid, SIGUSR1);
			usleep(250);
		}
	}
	cnt = 8;
	while (cnt--)
	{
		kill(server_pid, SIGUSR1);
		usleep(250);
	}
}

/*
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        ft_putstr_fd("./client [Server PID] [String to send]\n", STDERR_FILENO);
        exit(EXIT_FAILURE);    
    }    
	if (!ft_pid_is_valid(argv[1]))
	{
		ft_putstr_fd("The server PID is not valid.\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
    if (!ft_string_is_valid(argv[2]))
	{
		ft_putstr_fd("The string is not valid or has more than 1000 chars.\n",
		STDERR_FILENO);
		exit (EXIT_FAILURE);
	}
	ft_putstr_fd("[CLIENT]: Sending the string to the server...\n",
		STDOUT_FILENO);
	send_string(atoi(argv[1]), argv[2]);
	ft_putstr_fd("[CLIENT]: The string was sent to the server.\n",
		STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/