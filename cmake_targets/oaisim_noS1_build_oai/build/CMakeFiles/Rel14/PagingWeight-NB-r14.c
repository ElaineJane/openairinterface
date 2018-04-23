/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "PagingWeight-NB-r14.h"

int
PagingWeight_NB_r14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
PagingWeight_NB_r14_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
PagingWeight_NB_r14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
PagingWeight_NB_r14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
PagingWeight_NB_r14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
PagingWeight_NB_r14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
PagingWeight_NB_r14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
PagingWeight_NB_r14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
PagingWeight_NB_r14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
PagingWeight_NB_r14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
PagingWeight_NB_r14_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
PagingWeight_NB_r14_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td1);
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
PagingWeight_NB_r14_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	PagingWeight_NB_r14_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_PagingWeight_NB_r14_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_PagingWeight_NB_r14_value2enum_1[] = {
	{ 0,	2,	"w1" },
	{ 1,	2,	"w2" },
	{ 2,	2,	"w3" },
	{ 3,	2,	"w4" },
	{ 4,	2,	"w5" },
	{ 5,	2,	"w6" },
	{ 6,	2,	"w7" },
	{ 7,	2,	"w8" },
	{ 8,	2,	"w9" },
	{ 9,	3,	"w10" },
	{ 10,	3,	"w11" },
	{ 11,	3,	"w12" },
	{ 12,	3,	"w13" },
	{ 13,	3,	"w14" },
	{ 14,	3,	"w15" },
	{ 15,	3,	"w16" }
};
static unsigned int asn_MAP_PagingWeight_NB_r14_enum2value_1[] = {
	0,	/* w1(0) */
	9,	/* w10(9) */
	10,	/* w11(10) */
	11,	/* w12(11) */
	12,	/* w13(12) */
	13,	/* w14(13) */
	14,	/* w15(14) */
	15,	/* w16(15) */
	1,	/* w2(1) */
	2,	/* w3(2) */
	3,	/* w4(3) */
	4,	/* w5(4) */
	5,	/* w6(5) */
	6,	/* w7(6) */
	7,	/* w8(7) */
	8	/* w9(8) */
};
static asn_INTEGER_specifics_t asn_SPC_PagingWeight_NB_r14_specs_1 = {
	asn_MAP_PagingWeight_NB_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PagingWeight_NB_r14_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_PagingWeight_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PagingWeight_NB_r14 = {
	"PagingWeight-NB-r14",
	"PagingWeight-NB-r14",
	PagingWeight_NB_r14_free,
	PagingWeight_NB_r14_print,
	PagingWeight_NB_r14_constraint,
	PagingWeight_NB_r14_decode_ber,
	PagingWeight_NB_r14_encode_der,
	PagingWeight_NB_r14_decode_xer,
	PagingWeight_NB_r14_encode_xer,
	PagingWeight_NB_r14_decode_uper,
	PagingWeight_NB_r14_encode_uper,
	PagingWeight_NB_r14_decode_aper,
	PagingWeight_NB_r14_encode_aper,
	PagingWeight_NB_r14_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PagingWeight_NB_r14_tags_1,
	sizeof(asn_DEF_PagingWeight_NB_r14_tags_1)
		/sizeof(asn_DEF_PagingWeight_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_PagingWeight_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingWeight_NB_r14_tags_1)
		/sizeof(asn_DEF_PagingWeight_NB_r14_tags_1[0]), /* 1 */
	&asn_PER_type_PagingWeight_NB_r14_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PagingWeight_NB_r14_specs_1	/* Additional specs */
};

