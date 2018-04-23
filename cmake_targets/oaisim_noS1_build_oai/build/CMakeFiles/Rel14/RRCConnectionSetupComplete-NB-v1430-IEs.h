/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionSetupComplete_NB_v1430_IEs_H_
#define	_RRCConnectionSetupComplete_NB_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14 {
	RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14_mapped	= 0
} e_RRCConnectionSetupComplete_NB_v1430_IEs__gummei_Type_r14;

/* RRCConnectionSetupComplete-NB-v1430-IEs */
typedef struct RRCConnectionSetupComplete_NB_v1430_IEs {
	long	*gummei_Type_r14	/* OPTIONAL */;
	long	*dcn_ID_r14	/* OPTIONAL */;
	struct RRCConnectionSetupComplete_NB_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_NB_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gummei_Type_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_v1430_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetupComplete_NB_v1430_IEs_H_ */
#include <asn_internal.h>
