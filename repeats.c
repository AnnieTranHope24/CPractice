/* KR p. 20 */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
main(){
	int c, nw, state, temp, rl, isCounted; //temp store the last char,
	//rl stores the number of words which have repeated letters,
	//isCounted = 0 if a word has not counted as having repeated letters, =1 if it's counted

	state = OUT;
	nw = rl = isCounted = temp = 0;
  
  while ((c = getchar()) != EOF) {

	if(state == IN && c==temp && isCounted == 0){
		++rl;
		isCounted = 1;
	}
	
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
	  isCounted =0;
	}
	else if(state == IN){
		temp = c;
	}
    else if (state == OUT) {
      state = IN;
	  temp = c;
      ++nw;
    }
  }
  printf("Out of %d words, %d had repeated letters", nw, rl);
}