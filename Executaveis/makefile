install:
	sudo apt install linux-tools-common linux-tools-generic #Instalar ferramentas para o perf

#Comandos do Bubble:

BubbleMil: BubbleMil.out arquivo1000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./BubbleMil.out #Bubble com 1000 casos

BubbleDezMil: BubbleDezMil.out arquivo10000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./BubbleDezMil.out #Bubble com 10000 casos

#Comandos do Radix:

RadixMil: RadixMil.out arquivo1000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./RadixMil.out #Radix com 1000 casos

RadixDezMil: RadixDezMil.out arquivo10000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./RadixDezMil.out #Radix com 10000 casos

#Comandos do Quick:

QuickMil: QuickMil.out arquivo1000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./QuickMil.out #Quick com 1000 casos

QuickDezMil: QuickDezMil.out arquivo10000.txt
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./QuickDezMil.out #Quick com 10000 casos

#Comandos Fatorial

FatorialOito: FatorialOito.out
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./FatorialOito.out #Fatorial de oito

FatorialVinte: FatorialVinte.out
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses -a ./FatorialVinte.out #Fatorial de vinte
