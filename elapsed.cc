#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]){
	ofstream fsalida;
	fsalida.open("elapsed.log",ios::app);
	fsalida << argv[1] << " sec"<<endl;
}
	
