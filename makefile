metropolis.png : metropolis.py metropolis.dat
	python metropolis.py

metropolis.dat:metropolis.x
	./metropolis.x > metropolis.dat

metropolis.x : metropolis.cpp
	c++ metropolis.cpp -o metropolis.x

clean:
	rm metropolis.x metropolis.dat metropolis.png