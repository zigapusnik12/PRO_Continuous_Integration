all: 
	gcc -m32 main.c printd.c -o demo_printd

clean:
	rm -f demo_printd