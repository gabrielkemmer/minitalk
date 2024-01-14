#include <stdio.h>
#include <unistd.h>

// Dummy signal constants for simulation
#define SIGUSR1 10
#define SIGUSR2 12

// Mock version of kill function for simulation.
int kill(int pid, int signal) {
    // Print the signal instead of sending it for debugging
    printf("Sending signal %d to PID %d\n", signal, pid);
    return 0; // Return 0 to simulate success
}

void send_string(int server_pid, char* str)
{
    int		cnt;
    char	chr;

    while (*str != '\0')
    {
        cnt = 8;
        chr = *str++;
        while (cnt--)
        {
            if (chr >> cnt & 1)
                kill(server_pid, SIGUSR2);
            else
                kill(server_pid, SIGUSR1);
            usleep(250); // You might want to remove or adjust this for faster debugging
        }
    }
    cnt = 8;
    while (cnt--)
    {
        kill(server_pid, SIGUSR1);
        usleep(250); // Same as above
    }
}

int main() {
    int fake_pid = 1234; // Simulated PID
    char* message = "Hello"; // Test message

    printf("Sending message: %s\n", message);
    send_string(fake_pid, message);
    return 0;
}
