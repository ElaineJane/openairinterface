/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_InterFreqCarrierFreqListExt_v1350_H_
#define	_InterFreqCarrierFreqListExt_v1350_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v1350;

/* InterFreqCarrierFreqListExt-v1350 */
typedef struct InterFreqCarrierFreqListExt_v1350 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v1350) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqListExt_v1350_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqListExt_v1350;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo-v1350.h"

#endif	/* _InterFreqCarrierFreqListExt_v1350_H_ */
#include <asn_internal.h>
