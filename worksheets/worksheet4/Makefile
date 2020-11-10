rebuild: clean build
rebuilddemo: cleandemo demo
rebuildfull: cleanfull full

build:
	gcc -Wall calc.c -o calc

demo: 
	gcc -Wall calc.c -o calc_demo

full: 
	gcc -Wall -DFULL calc.c -o calc_full

cleandemo: 
	rm calc_demo
cleanfull: 
	rm calc_full
clean:
	rm calc




