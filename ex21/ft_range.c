#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;
	long	size;

	if (min >= max)
		return (NULL);
	size = (long)max - (long)min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
