#include <stdio.h>
// #define DECIMAL 100
int isPalindrome (char input[]);
int main (int argc, char* argv[]){
	int i;
	if(argc == 1){
		printf("%s", "Please enter at least one command line argument!");
		return 1;
		
	}

	for (i=1; i < argc; i++){
		if(isPalindrome(argv[i]) == 1){
			printf("Argv %d : %s IS a palindrome", i, argv[i]);
		}
		else{
			printf("Argv %d : %s IS NOT a palindrome", i, argv[i]);
		}
	}
	
}
int isPalindrome (char input[]){
	int i, d, k;
	k = i=0;
	d = 'a' - 'A';
	  // initialize the array to zeros - Java does this for you
	int nchar[100]; 
	  for (i = 0; i < 100; ++i) { 
		nchar[i] = 0;
	  }
	while(input[k] != '\0'){
		if(input[k]>='A' && input[k]<='Z'){
		input[k] = input[k]+d;
		}
		nchar[k] = input[k];
		++k;
		
	}
	int j;
	for(j = 0; j<k/2; j++){
		if(nchar[j] != nchar[k-j-1]){
			return 0;
		}
	}
	return 1;
}