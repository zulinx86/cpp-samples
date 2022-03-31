%: %.cpp
	g++ -std=gnu++20 $< -o $@

.PHONY: clean
clean:
	rm -f $(patsubst %.cpp,%,$(wildcard *.cpp))