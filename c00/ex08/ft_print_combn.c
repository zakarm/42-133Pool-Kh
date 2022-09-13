
#include<unistd.h>
void ft_print_combn(int n)
{
    int k,h,data=9*n,i;
    char datachar;
    i=1;
    while(i<=n)
    {
        k = 0;
        while(k <= 9)
        {
            datachar = k + 48;
            write(1, &datachar, 1);
            if(n>1)
            {
                h=k+1;
                datachar = h + 48;
                write(1,&datachar, 1);   
            }
            if(h != 9 || k != 8)
            
            {
                write(1, ", ",  2);
            }
            h++;
            k++;
        }
        i++;
    }
    write(1, " ", 1);
}

int main ()
{
    ft_print_combn(2);
}

