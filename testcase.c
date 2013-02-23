#include "skiplist.h"

int main(void)
{
	skiplist *sl = create_skiplist();

	insert(sl, 2, NULL);
	insert(sl, 7, NULL);
	insert(sl, 12, NULL);
	insert(sl, 5, NULL);
	insert(sl, 45, NULL);
	insert(sl, 19, NULL);

	print(sl);

	delete(sl, 2);
	print(sl);
	delete(sl, 5);
	print(sl);

	delete(sl, 45);
	print(sl);

	delete(sl, 19);
	print(sl);

	delete(sl, 7);
	delete(sl, 12);

	print(sl);

	return 0;
}
