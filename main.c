#include <libft.h>

int main()
{
	char *s;

	ft_printf("ATOI_BASE:\n");
	ft_printf("%d\n", ft_atoi_base("tonto", "nto"));

	s = ft_itoa_base(140, "nto");
	ft_printf("%s\n", s);
	free(s);

	//ft_printf("%s\n", ft_itoa(-2146473648));
	//ft_printf("%s\n", ft_itoa(-2146473649));
	//ft_printf("%s\n", ft_itoa(2146473647));
	//ft_printf("%s\n", ft_itoa(2146473648));
	return (0);
}
