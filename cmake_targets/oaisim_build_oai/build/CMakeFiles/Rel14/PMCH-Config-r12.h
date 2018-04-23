/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PMCH_Config_r12_H_
#define	_PMCH_Config_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PMCH_Config_r12__dataMCS_r12_PR {
	PMCH_Config_r12__dataMCS_r12_PR_NOTHING,	/* No components present */
	PMCH_Config_r12__dataMCS_r12_PR_normal_r12,
	PMCH_Config_r12__dataMCS_r12_PR_higerOrder_r12
} PMCH_Config_r12__dataMCS_r12_PR;
typedef enum PMCH_Config_r12__mch_SchedulingPeriod_r12 {
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf4	= 0,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf8	= 1,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf16	= 2,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf32	= 3,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf64	= 4,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf128	= 5,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf256	= 6,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf512	= 7,
	PMCH_Config_r12__mch_SchedulingPeriod_r12_rf1024	= 8
} e_PMCH_Config_r12__mch_SchedulingPeriod_r12;

/* PMCH-Config-r12 */
typedef struct PMCH_Config_r12 {
	long	 sf_AllocEnd_r12;
	struct PMCH_Config_r12__dataMCS_r12 {
		PMCH_Config_r12__dataMCS_r12_PR present;
		union PMCH_Config_r12__dataMCS_r12_u {
			long	 normal_r12;
			long	 higerOrder_r12;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dataMCS_r12;
	long	 mch_SchedulingPeriod_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_Config_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mch_SchedulingPeriod_r12_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_Config_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _PMCH_Config_r12_H_ */
#include <asn_internal.h>
