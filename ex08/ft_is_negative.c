void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else
    {
        ft_putchar('P'); 
    }
}
#include <unistd.h>
#include <stdio.h>

int main(void)
{
   void ft_putchar(char c)
    {
        write (1, &c, 1);
    }
    ft_is_negative (40);
    return(0);
}