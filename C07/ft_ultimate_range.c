#include <stdlib.h>

int		*ft_range(int min, int max)
{	
	int		*tab;
	int		*start_tab;

	if (min >= max)
		return(NULL);
	tab = malloc(sizeof(min) * (max - min));
	start_tab = tab;
	while (min <= max-1)
	{
		*tab = min;
		tab++;
		min++;
	}
	return(start_tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{	
	int	range_length;

	range_length = 0;
	range = ft_range(min, max);
	if (range == NULL);
		return(0);
	while (range_length <= (max - min))
	{
		range_length++;
	}
	return(range_length);
}
