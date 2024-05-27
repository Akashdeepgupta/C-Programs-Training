/*
AUTHOR: Akashdeep Gupta
Command Line Arguments
DOC: 27 May 2024
*/



// prototype
 int add(int , int);

int main(int argc, char *argv[]){
	
	int val1,val2,result;
	if(argc < 4){
		printf("Less Arguemnts\n");
		printf(""Usage : ./a.out int op int\n");
		return EXIT_FAILURE;
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	char op = argv[2][0];
	
	switch(op){
		case + :
	}

	printf("\n");
	return EXIT_SUCCESS;
}

int add(int a, int b){}

