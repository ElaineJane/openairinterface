/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/momo/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_PartialSuccessIndicator_H_
#define	_X2ap_PartialSuccessIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_PartialSuccessIndicator {
	X2ap_PartialSuccessIndicator_partial_success_allowed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_PartialSuccessIndicator;

/* X2ap-PartialSuccessIndicator */
typedef long	 X2ap_PartialSuccessIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_PartialSuccessIndicator;
asn_struct_free_f X2ap_PartialSuccessIndicator_free;
asn_struct_print_f X2ap_PartialSuccessIndicator_print;
asn_constr_check_f X2ap_PartialSuccessIndicator_constraint;
ber_type_decoder_f X2ap_PartialSuccessIndicator_decode_ber;
der_type_encoder_f X2ap_PartialSuccessIndicator_encode_der;
xer_type_decoder_f X2ap_PartialSuccessIndicator_decode_xer;
xer_type_encoder_f X2ap_PartialSuccessIndicator_encode_xer;
per_type_decoder_f X2ap_PartialSuccessIndicator_decode_uper;
per_type_encoder_f X2ap_PartialSuccessIndicator_encode_uper;
per_type_decoder_f X2ap_PartialSuccessIndicator_decode_aper;
per_type_encoder_f X2ap_PartialSuccessIndicator_encode_aper;
type_compare_f     X2ap_PartialSuccessIndicator_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_PartialSuccessIndicator_H_ */
#include <asn_internal.h>