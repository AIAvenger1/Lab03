CFLAGS = -Wno-implicit-function-declaration

all: output

output: main.o geometry.o quad.o ray.o
	@echo "Linking and producing the output applications"
	g++ $(CFLAGS) main.o geometry.o quad.o ray.o -o output
	

main.o: main.cpp
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.cpp

quad.o: quad.cpp
	@echo "Compiling the quad file"
	gcc $(CFLAGS) -c quad.cpp

ray.o: ray.cpp
	@echo "Compiling the ray file"
	gcc $(CFLAGS) -c ray.cpp

geometry.o: geometry.cpp
	@echo "Compiling the geometry file"
	gcc $(CFLAGS) -c geometry.cpp



clean:
	@echo "Removing everything but the source files"
	rm *.o output
