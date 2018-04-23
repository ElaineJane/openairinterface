/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CellGlobalIdEUTRA_H_
#define	_CellGlobalIdEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "CellIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGlobalIdEUTRA */
typedef struct CellGlobalIdEUTRA {
	PLMN_Identity_t	 plmn_Identity;
	CellIdentity_t	 cellIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGlobalIdEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGlobalIdEUTRA_H_ */
#include <asn_internal.h>
