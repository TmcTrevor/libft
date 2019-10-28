/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hel.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:31:46 by mokhames          #+#    #+#             */
/*   Updated: 2019/10/25 17:06:16 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#define buf_size 4096

/*typedef struct s_list
{
	char	*data;
	struct	s_list *next;
}				t_list;
*/
int 	*ft_tabindex(char *str ,int x)
{
	int *a;
	int j = 0;
	int e = 0;
	static p = 

	if(!(a = (int *)malloc(x + 1 * sizeof(int))))
	{
		free (a);
		return (NULL);
	}
	while(str[j])
	{
		if (str[j] == '\n')
		{
			a[e] = j;
			e++;
		}
		j++;
	}
	return (a);
}
int 	ft_number_of_lines(int fd)
{
	char a[buf_size];
	int ret = read(fd, a, buf_size);
	while (
}
int		get_next_line(int fd, char **line)
{
	int ret;
	while (ret = read(fd,*line,buf_size) != EOF)
	{
		p++;

}
	
int main()
{
	int fd;
	int ret;
	int i = 0,j= 0,c=0;
	char *b;
	int  *d;
	static int p;
	char a[buf_size  + 1];
	
	p = 0;
	fd = open("test", O_RDONLY);
	if (fd == -1)
	{	ft_putstr("open() fail");
		return (1);
	}
	ret = read(fd, a ,buf_size);
	a[ret] = '\0';
	while (a[i] != '\n')
		i++;
	b = (char *)malloc((i + 1) * sizeof(char));
	while (a[j])
	{
		if (a[j] == '\n')
			c++;
		j++;
	}
	d = ft_tabindex(a,c);
	printf("%d",p);
	ft_memcpy(b,a,d[p]);
	//ft_putnbr(ret);
	ft_putnbr(i);
	//printf("\nnumber of lines = %d\n",c);
	//ft_putchar('\n');
	p++;
	printf("hello  = %s",b);
	//for (int s = 0;d[s];s++)
	//	printf("\nd[%d] = %d",s,d[s]);
	//printf("a :\n");
	//ft_putstr(a);

	if (close(fd) == -1)
	{
		ft_putstr("close failed");
		return (1);
	}
	return (0);
}
