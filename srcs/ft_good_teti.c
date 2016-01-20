int	ft_good_teti(char *teti, char nb_teti, int i)
{
	int coin;

	coin = 0;
	if (i <= 20 && coin <= 4 && teti[i] == '#' && i >= 0)
	{
		coin = coin + 1;
		teti[i] = nb_teti + 'a';
		coin += ft_good_teti(teti, nb_teti, i + 1);
		coin += ft_good_teti(teti, nb_teti, i - 1);
		coin += ft_good_teti(teti, nb_test, i + 5);
		coin += ft_goog_teti(teti, nb_teti, i - 5);
	}
	return (coin);
}
