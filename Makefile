CXX = cc

build: rick.c
	$(CXX) rick.c -o rick

clean:
	rm -f rick
