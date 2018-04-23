/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RACH_Skip_r14_H_
#define	_RACH_Skip_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "STAG-Id-r11.h"
#include <constr_CHOICE.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_Skip_r14__targetTA_r14_PR {
	RACH_Skip_r14__targetTA_r14_PR_NOTHING,	/* No components present */
	RACH_Skip_r14__targetTA_r14_PR_ta0_r14,
	RACH_Skip_r14__targetTA_r14_PR_ptag_r14,
	RACH_Skip_r14__targetTA_r14_PR_pstag_r14,
	RACH_Skip_r14__targetTA_r14_PR_mcg_STAG_r14,
	RACH_Skip_r14__targetTA_r14_PR_scg_STAG_r14
} RACH_Skip_r14__targetTA_r14_PR;
typedef enum RACH_Skip_r14__ul_ConfigInfo_r14__ul_SchedInterval_r14 {
	RACH_Skip_r14__ul_ConfigInfo_r14__ul_SchedInterval_r14_sf2	= 0,
	RACH_Skip_r14__ul_ConfigInfo_r14__ul_SchedInterval_r14_sf5	= 1,
	RACH_Skip_r14__ul_ConfigInfo_r14__ul_SchedInterval_r14_sf10	= 2
} e_RACH_Skip_r14__ul_ConfigInfo_r14__ul_SchedInterval_r14;

/* RACH-Skip-r14 */
typedef struct RACH_Skip_r14 {
	struct RACH_Skip_r14__targetTA_r14 {
		RACH_Skip_r14__targetTA_r14_PR present;
		union RACH_Skip_r14__targetTA_r14_u {
			NULL_t	 ta0_r14;
			NULL_t	 ptag_r14;
			NULL_t	 pstag_r14;
			STAG_Id_r11_t	 mcg_STAG_r14;
			STAG_Id_r11_t	 scg_STAG_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} targetTA_r14;
	struct RACH_Skip_r14__ul_ConfigInfo_r14 {
		long	 numberOfConfUL_Processes_r14;
		long	 ul_SchedInterval_r14;
		long	 ul_StartSubframe_r14;
		BIT_STRING_t	 ul_Grant_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_ConfigInfo_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_Skip_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_SchedInterval_r14_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_Skip_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_Skip_r14_H_ */
#include <asn_internal.h>
