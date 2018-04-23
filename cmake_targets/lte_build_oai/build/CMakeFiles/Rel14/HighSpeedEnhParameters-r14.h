/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_HighSpeedEnhParameters_r14_H_
#define	_HighSpeedEnhParameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HighSpeedEnhParameters_r14__measurementEnhancements_r14 {
	HighSpeedEnhParameters_r14__measurementEnhancements_r14_supported	= 0
} e_HighSpeedEnhParameters_r14__measurementEnhancements_r14;
typedef enum HighSpeedEnhParameters_r14__demodulationEnhancements_r14 {
	HighSpeedEnhParameters_r14__demodulationEnhancements_r14_supported	= 0
} e_HighSpeedEnhParameters_r14__demodulationEnhancements_r14;
typedef enum HighSpeedEnhParameters_r14__prach_Enhancements_r14 {
	HighSpeedEnhParameters_r14__prach_Enhancements_r14_supported	= 0
} e_HighSpeedEnhParameters_r14__prach_Enhancements_r14;

/* HighSpeedEnhParameters-r14 */
typedef struct HighSpeedEnhParameters_r14 {
	long	*measurementEnhancements_r14	/* OPTIONAL */;
	long	*demodulationEnhancements_r14	/* OPTIONAL */;
	long	*prach_Enhancements_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighSpeedEnhParameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measurementEnhancements_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_demodulationEnhancements_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_prach_Enhancements_r14_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HighSpeedEnhParameters_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _HighSpeedEnhParameters_r14_H_ */
#include <asn_internal.h>
