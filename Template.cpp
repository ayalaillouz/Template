
#include "Queue.h"
#include <iostream>
using namespace std;
int main()
{
	Queue<int>q;
	q.Enqueue(3); q.Enqueue(4); q.Enqueue(5); q.Enqueue(6); q.Enqueue(7);
	while (!q.IsEmpty())
	{
		cout << q.Dequeue() << endl;
	}
+
}

