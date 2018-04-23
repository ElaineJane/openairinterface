/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionRelease_NB_H_
#define	_RRCConnectionRelease_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionRelease-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRelease_NB__criticalExtensions_PR {
	RRCConnectionRelease_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionRelease_NB__criticalExtensions_PR_c1,
	RRCConnectionRelease_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionRelease_NB__criticalExtensions_PR;
typedef enum RRCConnectionRelease_NB__criticalExtensions__c1_PR {
	RRCConnectionRelease_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionRelease_NB__criticalExtensions__c1_PR_rrcConnectionRelease_r13,
	RRCConnectionRelease_NB__criticalExtensions__c1_PR_spare1
} RRCConnectionRelease_NB__criticalExtensions__c1_PR;

/* RRCConnectionRelease-NB */
typedef struct RRCConnectionRelease_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionRelease_NB__criticalExtensions {
		RRCConnectionRelease_NB__criticalExtensions_PR present;
		union RRCConnectionRelease_NB__criticalExtensions_u {
			struct RRCConnectionRelease_NB__criticalExtensions__c1 {
				RRCConnectionRelease_NB__criticalExtensions__c1_PR present;
				union RRCConnectionRelease_NB__criticalExtensions__c1_u {
					RRCConnectionRelease_NB_r13_IEs_t	 rrcConnectionRelease_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionRelease_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_NB_H_ */
#include <asn_internal.h>
