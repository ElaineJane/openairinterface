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
/*
#include "event_handler.h"
//#include "SIMULATION/RF/defs.h"
//#include "PHY/types.h"
//#include "PHY/defs.h"
//#include "PHY/LTE_TRANSPORT/proto.h"
//#include "PHY/vars.h"

//#include "SIMULATION/ETH_TRANSPORT/proto.h"

//#ifdef OPENAIR2
//#include "LAYER2/MAC/defs.h"
//#include "LAYER2/MAC/proto.h"
//#include "LAYER2/MAC/vars.h"
//#include "pdcp.h"
#include "RRC/LITE/vars.h"
#include "RRC/NAS/nas_config.h"

//#include "SCHED/defs.h"
//#include "SCHED/vars.h"
#include "system.h"


//#include "PHY/TOOLS/lte_phy_scope.h"


#include "oaisim_functions.h"

#include "oaisim.h"
#include "oaisim_config.h"
#include "UTIL/OCG/OCG_extern.h"
#include "cor_SF_sim.h"
#include "UTIL/OMG/omg_constants.h"
#include "UTIL/FIFO/pad_list.h"
#include "enb_app.h"

#include "../PROC/interface.h"
#include "../PROC/channel_sim_proc.h"
#include "../PROC/Tsync.h"
#include "../PROC/Process.h"

#include "UTIL/LOG/vcd_signal_dumper.h"
#include "UTIL/OTG/otg_kpi.h"
#include "assertions.h"

#if defined(ENABLE_ITTI)
# include "intertask_interface.h"
# include "create_tasks.h"
#endif

#include "T.h"

*/
//#define UL_RB_ALLOC            computeRIV(lte_frame_parms->N_RB_UL,0,24)
//#define CCCH_RB_ALLOC          computeRIV(lte_frame_parms->N_RB_UL,0,3)
//#define RA_RB_ALLOC            computeRIV(lte_frame_parms->N_RB_UL,0,3)
//#define DLSCH_RB_ALLOC         0x1fff

//#define DECOR_DIST             100
//#define SF_VAR                 10

//constant for OAISIM soft realtime calibration
//#define SF_DEVIATION_OFFSET_NS 100000        /*= 0.1ms : should be as a number of UE */
//#define SLEEP_STEP_US          100           /*  = 0.01ms could be adaptive, should be as a number of UE */
//#define K                      2             /* averaging coefficient */
//#define TARGET_SF_TIME_NS      1000000       /* 1ms = 1000000 ns */
/*
uint8_t usim_test = 0;

frame_t frame = 0;
char stats_buffer[16384];
channel_desc_t *eNB2UE[NUMBER_OF_eNB_MAX][NUMBER_OF_UE_MAX][MAX_NUM_CCs];
channel_desc_t *UE2eNB[NUMBER_OF_UE_MAX][NUMBER_OF_eNB_MAX][MAX_NUM_CCs];
//Added for PHY abstraction
node_desc_t *enb_data[NUMBER_OF_eNB_MAX];
node_desc_t *ue_data[NUMBER_OF_UE_MAX];

pthread_cond_t sync_cond;
pthread_mutex_t sync_mutex;
int sync_var=-1;

pthread_mutex_t subframe_mutex;
int subframe_eNB_mask=0,subframe_UE_mask=0;

openair0_config_t openair0_cfg[MAX_CARDS];
uint32_t          downlink_frequency[MAX_NUM_CCs][4];
int32_t           uplink_frequency_offset[MAX_NUM_CCs][4];
openair0_rf_map rf_map[MAX_NUM_CCs];

#if defined(ENABLE_ITTI)
volatile int             start_eNB = 0;
volatile int             start_UE = 0;
#endif
volatile int                    oai_exit = 0;


double cpuf;
#include "threads_t.h"
threads_t threads= {-1,-1,-1,-1,-1,-1,-1};


time_stats_t oaisim_stats;
time_stats_t oaisim_stats_f;
time_stats_t dl_chan_stats;
time_stats_t ul_chan_stats;

*/
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

	log_thread_init();

}