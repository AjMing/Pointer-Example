compile: test.cpp 
	 g++  test.cpp -o test


run: test
	 ./test


clean: test
	 rm test
