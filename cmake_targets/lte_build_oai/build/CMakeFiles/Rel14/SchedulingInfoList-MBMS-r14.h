/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SchedulingInfoList_MBMS_r14_H_
#define	_SchedulingInfoList_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SchedulingInfo_MBMS_r14;

/* SchedulingInfoList-MBMS-r14 */
typedef struct SchedulingInfoList_MBMS_r14 {
	A_SEQUENCE_OF(struct SchedulingInfo_MBMS_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfoList_MBMS_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfoList_MBMS_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SchedulingInfo-MBMS-r14.h"

#endif	/* _SchedulingInfoList_MBMS_r14_H_ */
#include <asn_internal.h>
