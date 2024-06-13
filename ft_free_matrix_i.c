#include "libft.h"

void	ft_free_matrix_i(char **matrix, int i)
{
	while (--i >= 0)
	{
		free(matrix[i]);
		matrix[i] = NULL;
		i--;
	}
	free(matrix);
	matrix = NULL;
}
