#include <iostream>
#include <memory>

class Entity
{
public:
	Entity();
	~Entity();

private:

};
int main()
{
	int* someNumber = (int*)malloc(sizeof(int));

	free(someNumber);

	int* newNumber = new int;

	delete newNumber;

	Entity* mallocEntity = (Entity*)malloc(sizeof(Entity));

	free(mallocEntity);

	Entity* newEntity = new Entity();

	delete newEntity;

	//Summary: Malloc ne poziva constructor klase, free ne poziva destructor klase
	//Summary: new poziva constructor, delete poziva destructor
}