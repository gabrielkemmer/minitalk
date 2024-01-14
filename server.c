#include "libft/libft.h"
#include "ft_minitalk.h"

static void    handler(int sig)
{
    static char chr = 0;
    static char	str[1000] = {0};
    static int cont = 0;
    static int index = 0;
    int i = 0;

    chr |= (sig == SIGUSR2);
    if (++cont == 8)
    {
        str[index++] = chr;
        if (chr == '\0')
        {
            while (str[i] != '\0')
		    {
			    write(STDOUT_FILENO, &str[i], 1);
			    i++;
		    }
            index = 0;
        }
        cont = 0;
        chr = 0;
    }
    else   
        chr <<=1;
}

/*
int main()
{
    struct sigaction	sa;
    pid_t pid = getpid();
    ft_putstr_fd("Pid is:", STDOUT_FILENO);
    ft_putnbr_fd(pid, STDOUT_FILENO); 
    ft_putstr_fd("\n", STDOUT_FILENO);

    sa.sa_handler = handler;
    sa.sa_flags = SA_RESTART;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while(1)
        pause();
        
    return (0);
}
*/