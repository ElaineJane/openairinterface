/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v1260_IEs_H_
#define	_UE_EUTRA_Capability_v1260_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_EUTRA_Capability_v1270_IEs;

/* UE-EUTRA-Capability-v1260-IEs */
typedef struct UE_EUTRA_Capability_v1260_IEs {
	long	*ue_CategoryDL_v1260	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1270_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1260_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1260_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-EUTRA-Capability-v1270-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1260_IEs_H_ */
#include <asn_internal.h>
