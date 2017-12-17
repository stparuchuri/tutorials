This folder contains an example of how constructor and deconstructor are inherited in a derived class. 
main.cpp --> the very obvious file containing the main function
mother.h & mother.cpp --> declare and define the mother class.
daughter.h & daughter.cpp --> declare and define the daughter class.

NOTE: To create a daughter class, the mother class has to be set up first, thus it will setup a mother class which will call a mother constructor and thus goes on.

Similarly on the deconstructor, the daughter deconstrucotr gets called first and then mother and them grand mother and so on.
