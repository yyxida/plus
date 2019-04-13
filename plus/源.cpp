#include<iostream>
using namespace std;
/*int main()
{
	int S = 0, n = 0, TEMP_S, TEMP_n;
	while (S<500)
	{
		TEMP_S = S;
		TEMP_n = n;
		n++;
		S = S + n;
	}
	cout << TEMP_S << endl << TEMP_n;
	return 0;
}*/
int main()
{
	int n[500],i=1,s=0;
	while (i < 500)
	{
		n[i] = i;
		i++;
	}
	i = 0;

	while (s < 7)
	{
		++i;
		s += n[i];
	}
	s -= n[i];
	i -= 1;

	cout << s << endl << i;

}