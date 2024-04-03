/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:29:36 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/17 21:50:46 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define V_MAX 4
#define V_MIN 1

#define row_width 6
#define row_height 6

#define Arrayaccess(a, i, j) ((a)[(i) * ncolumns + (j)])

int	check_vue(int x, int y, int **m)
{
	int left = m[x][0];
	int initial_l = m[x][1];
	int right = m[x][5];
	int initial_r = m[x][4];
	int	i;
	int	v = 0, v2 = 0;
	i = 1;

	// left seen builings
	while(i < 5)
	{
		if(m[x][i] == 4){ v ++; break;}
		if(m[x][i] >= initial_l)
		{
			v ++;	
		}
		i++;
	}
	i = 4;
	while(i > 0)
	{
		if(m[x][i] == 4) {v2++; break;}
		if(m[x][i] >= initial_r)
		{	
			v2++;
		}
		i++;
	}
	if(v == left && v2 == right)
		return 0;
	return -1;
}

int	check_sudoku(int x, int y, int **m, int check_vert)
{
	int	similar[5];
	int o = 0;
	while(o < 5){similar[o] = 0; o++;}
	int i = 1;
	while(i < 5)
	{
		if(similar[m[x][i]] != 0)return -1;

		similar[m[x][i]] = 1;
		i++;
	}
	i = 1;
	o = 0;
	while(o < 5){similar[o] = 0; o++;}
	if(check_vert)
	{
		while(i < 5)
		{
			if(similar[m[i][1] != 0]) return -1;
			similar[m[i][1]] = 1;
			i++;
		}
		
	}
	return 0;
}

void	clear_matrice(int **m)
{
	for(int i = 0; i < 5; i++)
	{
		for(int j =0 ; j < 5; j++)
		{
			m[i][j] = 0;
		}
	}
}


int throw_all_combinations(int x, int y, int vert, int **m, int *ofst)
{
	//int p[] = {0, 0, 0, 0}
	int	i;
	int	j;
	int	k;
	int	l;
	i = j = k = l = 1;
	i = i + ofst[0];
	while(i < 5)
	{
		j = 1 + ofst[1];
		while(j < 5)
		{
			k = 1 + ofst[2];
			while(k < 5)
			{
				l = 1 + ofst[3];
				while(l < 5)
				{	
					//printf("comb %d %d %d %d \n", i, j, k, l);
					m[x][y] = i;
					m[x][y + 1] = j;
					m[x][y + 2] = k;
					m[x][y + 3] = l;	
					// IJKL as 4123
					int p = check_sudoku(x, y, m, vert);
					int	q = check_vue(x, y, m);
					printf("comb %d %d %d %d   =  \n", i, j, k, l);
					if(q == -1 || p == -1)
					{
						// m[x][y] = m[x][y + 1] = m[x][y + 2]  = m[x][y + 3] = 0;
						//clear_matrice(m);
						//ofst++;
						//throw_all_combinations(x, y, vert, m, ofst);
						return -1;
					}else {
						printf("Combinaison found %d %d %d %d \n",i,j,k,l);
						return 0;
					}

					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
}




void	printf_matrice(int	**m)
{
	int		i;
	int		j;
	i = 0;
	while(i < row_width)
	{
		j = 0;
		while(j < row_height)
		{
			char p = m[i][j] + '0';
			write(1, &(p), 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j = 0;
	int		***bck_trckp; // matrice liste
	int		**m; // matricei
	m = (int **) malloc((row_width * row_height) * sizeof(int *));
	for(int	i = 0; i < 6; i++) m[i] = (int *)malloc(row_width *  sizeof(int));
	for(int u = 0; u < 6; u++){
		for(int j = 0; j < 6; j++){
			m[u][j] = 0;
		}
	}
	if(argc < 2) return 0;
	int i = 1;
	int	v = 0;

	//printf_matrice(m);

	while(i < 5)
	{
		m[0][i] = argv[1][v + 8] - '0';
		m[i][5] = argv[1][v + 4] - '0';
		m[5][i] = argv[1][v + 12] - '0';
		m[i][0] = argv[1][v + 0] - '0';
		i++;
		v+=2; 
	}
	int h[] = {0,0, 0, 0};
	int	p = -1;
	int s = 0;
	while(p != 0)
	{
		// rowi
		int a =  throw_all_combinations(1, 1, 0, m , h);
		int b = throw_all_combinations(2, 1, 0, m , h);
   		int c = throw_all_combinations(3, 1, 0, m,  h);
    	int d = throw_all_combinations(4, 1, 0, m, h);
		p = a +b +c +d;
		h[0] = s%10; h[2] = s%1000;
		h[1] = s%100; h[3] = s%10000;
		s++; 
	}
	// colonne
  	//throw_all_combinations(1, 1, 1, m);
    //throw_all_combinations(1, 2, 1, m);
    //throw_all_combinations(1, 3, 1, m);
    //throw_all_combinations(1, 4, 1, m);


	printf_matrice(m);
	free(m);
	return (0);
}
