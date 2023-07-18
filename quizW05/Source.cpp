#include<iostream>
using namespace std;
struct sData {
	int x, y;
	struct sData *next;
};
void f(struct sData *D);
void main() {
	struct sData D1, D2;
	D1.x = 100;
	D1.y = 110;
	D2.x = 200;
	D2.y = 210;
	D1.next = &D2;
	D2.next = NULL;
	f(&D1);
}
void f(struct sData *D) {
	/*cout << (*D).x << "," << (*D).y << endl;
	cout << (*((*D).next)).x << "," << (*((*D).next)).y << endl;*/
	cout << D->x << "," << D->y << endl;
	D = D->next;
	cout << D->x << "," << D->y << endl;
}
