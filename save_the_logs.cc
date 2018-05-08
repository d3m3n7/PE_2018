#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
using namespace std;

int main(){
	string s;
	int count = 0;
	cin>>s>>s;
	while (cin>>s>>s>>s>>s>>s>>s>>s>>s>>s) count++;
	char buf[120];
	sprintf (buf,"REGISTRE/%d", count);
	s = string(buf);
	cout <<"mkdir "<<s<< endl;	//OUTPUT
	int pid = fork();
	if (pid == 0) {
		
		execlp("sh","sh","shell_test.sh",(char *) NULL);	//FUNCIONA :)
		exit(-1);
	}
	waitpid(-1,NULL,0);
	sprintf (buf,"REGISTRE/%d/", count);
	s = string(buf);
	cout <<"mcopy *.log "<<s << endl;	//OUTPUT
	pid = fork();
	if (pid == 0) {
		execlp("sh","sh","shell_test.sh",(char *) NULL);	//FUNCIONA :)
		exit(-1);
	}
	waitpid(-1,NULL,0);
}
