test:
	./rush-01 "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4"
test_s:
	./rush-01 "1 2 1 2 1 2 1 2"

gcc:
	gcc *.c -o rush-01                         

compile:
	cc -Wextra -o rush-01 *.c

normi:
	norminette

clean:
	rm *.out
	rm rush-01

test_pdf:
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" 
	

test_pdf_original:
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
	
test_pdf_mod:
	./rush-01 "4 3 2 1 1 2 2 2 4 1 2 1 1 2 1 2"
