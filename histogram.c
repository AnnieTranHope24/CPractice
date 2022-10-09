#include <stdio.h>
#define DECIMAL 26
main()
{
  int c, i, d;
  int nchar[DECIMAL]; 
  d = 'a' - 'A';


  // initialize the array to zeros - Java does this for you
  for (i = 0; i < DECIMAL; ++i) { 
    nchar[i] = 0;
  }

  while ((c = getchar()) != EOF) {
	if(c>='A' && c<='Z'){
		c = c+d;
	}
    if (c >= 'a' && c <= 'z')
      ++nchar[c-'a']; // convert the ASCII value to an array index corresponding to the character; increment the array contents

  }

  printf("digits = ");
  for (i = 0; i < DECIMAL; i++){
	  
	  putchar('a'+i);
		printf(":");
		int j;
		for(j=0; j<nchar[i];j++){
			printf("%s", "-");
		}
		printf("%s\n", "|");

  }

}