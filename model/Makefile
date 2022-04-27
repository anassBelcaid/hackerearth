GCC="g++"
flgas="-std=c++17"

run:  compile input.txt
	./main <input.txt > output.txt
	diff output.txt expected.txt

compile: main.cpp
	$(GCC) $(flags) -o main main.cpp

