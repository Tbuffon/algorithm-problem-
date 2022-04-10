#include <iostream> 

using namespace std;

struct Vertex {
	int item;
	Vertex * next;
};
Vertex * head = NULL;

int main() {
	return 0;
}

Vertex * Get(int i) {
	Vertex * ptr = head;
	for (int k = 0; k < i; k++){
		ptr = ptr->next;
	}
	return ptr;
}

