/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MultiBandInfoList_v10j0_H_
#define	_MultiBandInfoList_v10j0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_r10;

/* MultiBandInfoList-v10j0 */
typedef struct MultiBandInfoList_v10j0 {
	A_SEQUENCE_OF(struct NS_PmaxList_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiBandInfoList_v10j0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiBandInfoList_v10j0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NS-PmaxList-r10.h"

#endif	/* _MultiBandInfoList_v10j0_H_ */
#include <asn_internal.h>
