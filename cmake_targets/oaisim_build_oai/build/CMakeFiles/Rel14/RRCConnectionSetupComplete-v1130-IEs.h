/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionSetupComplete_v1130_IEs_H_
#define	_RRCConnectionSetupComplete_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_v1130_IEs__connEstFailInfoAvailable_r11 {
	RRCConnectionSetupComplete_v1130_IEs__connEstFailInfoAvailable_r11_true	= 0
} e_RRCConnectionSetupComplete_v1130_IEs__connEstFailInfoAvailable_r11;

/* Forward declarations */
struct RRCConnectionSetupComplete_v1250_IEs;

/* RRCConnectionSetupComplete-v1130-IEs */
typedef struct RRCConnectionSetupComplete_v1130_IEs {
	long	*connEstFailInfoAvailable_r11	/* OPTIONAL */;
	struct RRCConnectionSetupComplete_v1250_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1130_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionSetupComplete-v1250-IEs.h"

#endif	/* _RRCConnectionSetupComplete_v1130_IEs_H_ */
#include <asn_internal.h>
