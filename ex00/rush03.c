void ft_putchar(char    c);
void rush03(int     x, int      y)
{
                int 	counter;
                int 	num_columns1;
				int		num_columns2;
                
                counter = 0;
                num_columns1 = x;
				num_columns2 = x;
                if(y > 0 && x > 0)
                {
                    ft_putchar('A');
                    if(x > 1)
                    {
                    while(x > 1)
                    {
                                    ft_putchar('B');
                                    x--;
                    }
                    ft_putchar('A');
                    }
                    while(y > 1)
                    {           ft_putchar('\n');
                                ft_putchar('B');
                                while(num_columns1 > 1)
                                {
                                                ft_putchar(' ');
												num_columns1--;
                                }
                                ft_putchar('B');
                                y--;
								num_columns1 = num_columns2;
                    }
                    ft_putchar('\n');
                    ft_putchar('C');
                    while(num_columns2 > 1)
                    {
                                    ft_putchar('B');
                                    num_columns2--;
                    }
                    ft_putchar('C');
                }
                ft_putchar('\n');
}
