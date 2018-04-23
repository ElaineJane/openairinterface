/*  
* This is the simulation for NB-IoT RRC layer based on ITTI. 
*	Main Stream: 
*	1. Configure the related RRC configuration parameters and related instances
*	2. Create NB_IoT RRC tasks : ENB _APP, ENB_RRC, UE_RRC
*	3. Switch ITTI Message in each task, process the received message and generate the corresponding  replying message, generate a ITTI message to the opponent	            
*/

/*! \file TEST/RRC_NB_IoT/oaisim.c
 * \brief rrc oaisim top level
 * \author Elaine CAO
 * \date 2018-04
 * \version 1.0
 * \company 
 * \email: 
 * \note
 * \warning
 */

#include <string.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cblas.h>
#include <execinfo.h>
#include "intertask_interface.h"
#include "create_tasks.h"

pthread_cond_t sync_cond;
pthread_mutex_t sync_mutex;


static void print_current_directory(void)
{
  char dir[8192]; /* arbitrary size (should be big enough) */
  if (getcwd(dir, 8192) == NULL)
    printf("ERROR getting working directory\n");
  else
    printf("working directory: %s\n", dir);
}


int main (int argc, char **argv)
{
	printf("This is a test for NB-IoT RRC layer functions\n");
	// print current working directory()    #include <unistd.h>
	print_current_directory();

	start_background_system();

	//log_thread_init();

	  pthread_cond_init(&sync_cond,NULL);
	  pthread_mutex_init(&sync_mutex, NULL);
	  
}