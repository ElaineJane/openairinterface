/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionRelease_NB_v1430_IEs_H_
#define	_RRCConnectionRelease_NB_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectedCarrierInfo_NB_v1430;

/* RRCConnectionRelease-NB-v1430-IEs */
typedef struct RRCConnectionRelease_NB_v1430_IEs {
	struct RedirectedCarrierInfo_NB_v1430	*redirectedCarrierInfo_v1430	/* OPTIONAL */;
	long	*extendedWaitTime_CPdata_r14	/* OPTIONAL */;
	struct RRCConnectionRelease_NB_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_NB_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_NB_v1430_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RedirectedCarrierInfo-NB-v1430.h"

#endif	/* _RRCConnectionRelease_NB_v1430_IEs_H_ */
#include <asn_internal.h>
