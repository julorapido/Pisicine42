/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:05:31 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/10 13:01:12 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int		r;
	int		i;
	int		p;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		p = (int) str[i];
		if ((p >= 65 && p <= 90) || (p >= 97 && p <= 122))
		{
			r++;
		}
		i++;
	}
	if (r == i || i == 0)
		return (1);
	else
		return (0);
}

/*int main()
{
	char *e = "";
	char *p = "werwerwerkfok";
	char *m = "121werwer";
	int c = ft_str_is_alpha(p);
	int d = ft_str_is_alpha(m);
	int w = ft_str_is_alpha(e);
	printf("%d \n", c);
	printf("%d \n", d);
	printf("%d \n", w);
	return 0;

}*/
