install:
	sudo apt install linux-tools-common linux-tools-generic #Instalar ferramentas para o perf

all: exec
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./exec
