/*
 * my_who V 0.1
 * custom version of who program
 *open, read UTMP file, and show results
 *
 */


#include <stdio.h>
#include <utmp.h>
#include <fcntl.h>
#include <unistd.h>


#define SHOWHOST  //remote machine output


int main()
{
  struct utmp  current_record;

 if((utmpfd=open(UTMP_FILE, ORDONLY)) == -1)
 {
   perror(UTMP_FILE);
   exit(1);
 }

 while(read(utmpfd, &current_record, reclen) == reclen)
   show_info(&current_record);
 
 close(utmpfd);
 return 0;

}
