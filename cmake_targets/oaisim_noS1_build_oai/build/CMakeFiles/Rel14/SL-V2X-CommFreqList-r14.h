/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SL_V2X_CommFreqList_r14_H_
#define	_SL_V2X_CommFreqList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-V2X-CommFreqList-r14 */
typedef struct SL_V2X_CommFreqList_r14 {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_CommFreqList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_CommFreqList_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_CommFreqList_r14_H_ */
#include <asn_internal.h>
