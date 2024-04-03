/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:44:28 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/13 16:36:03 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_upper(char c)
{
	int		m;

	m = (int)(c);
	if ((m >= 65 && m <= 90))
	{
		return (1);
	}
	else if (m >= 48 && m <= 57)
	{
		return (2);
	}
	return (0);
}

int	is_alpha(char c)
{
	int		m;

	if (c >= '0' && c <= '9')
		m = c;
	else
		m = (int)(c);
	if ((m >= 97 && m <= 122) || (m >= 65 && m <= 90) || (m >= 48 && m <= 57))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1)
		{
			if (is_alpha(str[i - 1]) == 0)
			{
				if (is_upper(str[i]) == 0)
					str[i] -= 32;
			}
			else
				if (is_upper(str[i]) == 1)
					str[i] += 32;
		}
		else
			if (is_upper(str[i]) == 1)
				str[i] += 32;
		i++;
	}
	return (str);
}

/*int main()
{
	char e[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", e);
	ft_strcapitalize(e);
	printf("%s \n", e);
	return 0;
}*/
