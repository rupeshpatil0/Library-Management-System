all:
	g++ src/*.cpp -std=c++14 -o build/output
	./build/output

clean:
	rm -r build/*