CXX="clang++"
flgas="-std=c++17"

run:  compile input.txt
	./main <input.txt > output.txt
	diff output.txt expected.txt

compile: main.cpp
	$(CXX) $(flags) -o main main.cpp

