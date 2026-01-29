int main()
{
	int x = 10;

	decltype(auto) y = x;
	const decltype(auto) z = x; //invalid
}
