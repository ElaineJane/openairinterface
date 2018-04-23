/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AffectedCarrierFreq_v1310_H_
#define	_AffectedCarrierFreq_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AffectedCarrierFreq-v1310 */
typedef struct AffectedCarrierFreq_v1310 {
	MeasObjectId_v1310_t	*carrierFreq_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AffectedCarrierFreq_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreq_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _AffectedCarrierFreq_v1310_H_ */
#include <asn_internal.h>
