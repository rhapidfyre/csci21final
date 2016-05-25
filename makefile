all: final

final: rocketship.o specialrocketship.o CinReader.o activator.o megaweapon.o
	g++ -Wall -g -o final rocketship.o specialrocketship.o CinReader.o activator.o megaweapon.o
	
specialrocketship: specialrocketship.cpp
	g++ -Wall -g -c specialrocketship.cpp
	
rocketship: rocketship.cpp
	g++ -Wall -g -c rocketship.cpp
	
activator: activator.cpp
	g++ -Wall -g -c activator.cpp
	
clean:
	rm *.o final