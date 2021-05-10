#include <unistd.h>
void ft_print_numbers(void)
{
        char ch;

        ch = 48;
        while (ch < 58)
        {
                write (1, &ch, 1);
                ch++;
        }
        return ;
}

int main()
{
        ft_print_numbers();
        return (0);
}
