/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_V2X_BandwidthClass_r14_H_
#define	_V2X_BandwidthClass_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum V2X_BandwidthClass_r14 {
	V2X_BandwidthClass_r14_a	= 0,
	V2X_BandwidthClass_r14_b	= 1,
	V2X_BandwidthClass_r14_c	= 2,
	V2X_BandwidthClass_r14_d	= 3,
	V2X_BandwidthClass_r14_e	= 4,
	V2X_BandwidthClass_r14_f	= 5
	/*
	 * Enumeration is extensible
	 */
} e_V2X_BandwidthClass_r14;

/* V2X-BandwidthClass-r14 */
typedef long	 V2X_BandwidthClass_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandwidthClass_r14;
asn_struct_free_f V2X_BandwidthClass_r14_free;
asn_struct_print_f V2X_BandwidthClass_r14_print;
asn_constr_check_f V2X_BandwidthClass_r14_constraint;
ber_type_decoder_f V2X_BandwidthClass_r14_decode_ber;
der_type_encoder_f V2X_BandwidthClass_r14_encode_der;
xer_type_decoder_f V2X_BandwidthClass_r14_decode_xer;
xer_type_encoder_f V2X_BandwidthClass_r14_encode_xer;
per_type_decoder_f V2X_BandwidthClass_r14_decode_uper;
per_type_encoder_f V2X_BandwidthClass_r14_encode_uper;
per_type_decoder_f V2X_BandwidthClass_r14_decode_aper;
per_type_encoder_f V2X_BandwidthClass_r14_encode_aper;
type_compare_f     V2X_BandwidthClass_r14_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandwidthClass_r14_H_ */
#include <asn_internal.h>
