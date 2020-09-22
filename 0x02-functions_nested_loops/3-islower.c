/**
  *_islower - check if lower case
  *@c: ascii code of caracter to check
  *Return: 1 when true 0 when false
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
