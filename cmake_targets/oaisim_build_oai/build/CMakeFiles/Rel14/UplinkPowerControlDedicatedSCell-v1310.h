/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UplinkPowerControlDedicatedSCell_v1310_H_
#define	_UplinkPowerControlDedicatedSCell_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListPUCCH_r10;

/* UplinkPowerControlDedicatedSCell-v1310 */
typedef struct UplinkPowerControlDedicatedSCell_v1310 {
	long	 p0_UE_PUCCH;
	struct DeltaTxD_OffsetListPUCCH_r10	*deltaTxD_OffsetListPUCCH_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicatedSCell_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicatedSCell_v1310;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaTxD-OffsetListPUCCH-r10.h"

#endif	/* _UplinkPowerControlDedicatedSCell_v1310_H_ */
#include <asn_internal.h>
