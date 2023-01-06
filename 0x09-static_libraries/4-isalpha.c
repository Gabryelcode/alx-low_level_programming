/**
 * _isalpha - checks for lowercase or upercase character
 * @c: receives the character to check
 *
 * Return: 1 (Lowercase or Uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
