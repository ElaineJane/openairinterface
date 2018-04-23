/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SystemInformationBlockType1_NB_v1430_H_
#define	_SystemInformationBlockType1_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellSelectionInfo_NB_v1430;

/* SystemInformationBlockType1-NB-v1430 */
typedef struct SystemInformationBlockType1_NB_v1430 {
	struct CellSelectionInfo_NB_v1430	*cellSelectionInfo_v1430	/* OPTIONAL */;
	struct SystemInformationBlockType1_NB_v1430__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_NB_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellSelectionInfo-NB-v1430.h"

#endif	/* _SystemInformationBlockType1_NB_v1430_H_ */
#include <asn_internal.h>
