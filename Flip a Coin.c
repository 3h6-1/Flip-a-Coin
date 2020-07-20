#include <time.h>
#include <stdlib.h>

int main() {
	srand((unsigned)time(NULL));
	if (rand() % 2 == 0)
		system("osascript -e 'display alert \"Results\" message \"Heads\"'");
	else
		system("osascript -e 'display alert \"Results\" message \"Tails\"'");
	return 0;
}
