/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SCellToAddModListExt_v14xy_H_
#define	_SCellToAddModListExt_v14xy_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddModExt_v14xy;

/* SCellToAddModListExt-v14xy */
typedef struct SCellToAddModListExt_v14xy {
	A_SEQUENCE_OF(struct SCellToAddModExt_v14xy) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModListExt_v14xy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModListExt_v14xy;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToAddModExt-v14xy.h"

#endif	/* _SCellToAddModListExt_v14xy_H_ */
#include <asn_internal.h>
