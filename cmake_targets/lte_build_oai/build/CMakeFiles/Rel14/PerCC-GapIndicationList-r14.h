/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PerCC_GapIndicationList_r14_H_
#define	_PerCC_GapIndicationList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PerCC_GapIndication_r14;

/* PerCC-GapIndicationList-r14 */
typedef struct PerCC_GapIndicationList_r14 {
	A_SEQUENCE_OF(struct PerCC_GapIndication_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PerCC_GapIndicationList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PerCC_GapIndicationList_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PerCC-GapIndication-r14.h"

#endif	/* _PerCC_GapIndicationList_r14_H_ */
#include <asn_internal.h>
