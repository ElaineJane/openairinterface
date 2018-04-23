/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SL_HoppingConfigDisc_r12_H_
#define	_SL_HoppingConfigDisc_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_HoppingConfigDisc_r12__c_r12 {
	SL_HoppingConfigDisc_r12__c_r12_n1	= 0,
	SL_HoppingConfigDisc_r12__c_r12_n5	= 1
} e_SL_HoppingConfigDisc_r12__c_r12;

/* SL-HoppingConfigDisc-r12 */
typedef struct SL_HoppingConfigDisc_r12 {
	long	 a_r12;
	long	 b_r12;
	long	 c_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_HoppingConfigDisc_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_c_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_HoppingConfigDisc_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_HoppingConfigDisc_r12_H_ */
#include <asn_internal.h>
