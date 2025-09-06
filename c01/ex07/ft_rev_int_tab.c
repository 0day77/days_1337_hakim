#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b_s;
	int	kora;

	a = 0;
	b_s = size - 1;
	while (a < b_s)
	{
		kora = tab[a];
		tab[a] = tab[b_s];
		tab[b_s] = kora;
		a++;
		b_s--;
	}
}
/*
int main (){
	int tab[]= {1,2,3,4,5,6,7};
	int n = 7;
	ft_rev_int_tab(tab,n);
	for (int i = 0; i < n; i++)
	{
		printf("%d",tab[i]);
	}
}*/
