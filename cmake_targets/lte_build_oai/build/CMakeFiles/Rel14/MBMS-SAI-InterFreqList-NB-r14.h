/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MBMS_SAI_InterFreqList_NB_r14_H_
#define	_MBMS_SAI_InterFreqList_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SAI_InterFreq_NB_r14;

/* MBMS-SAI-InterFreqList-NB-r14 */
typedef struct MBMS_SAI_InterFreqList_NB_r14 {
	A_SEQUENCE_OF(struct MBMS_SAI_InterFreq_NB_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SAI_InterFreqList_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreqList_NB_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-SAI-InterFreq-NB-r14.h"

#endif	/* _MBMS_SAI_InterFreqList_NB_r14_H_ */
#include <asn_internal.h>
