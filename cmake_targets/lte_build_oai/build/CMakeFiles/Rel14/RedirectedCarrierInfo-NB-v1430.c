/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RedirectedCarrierInfo-NB-v1430.h"

static int
redirectedCarrierOffsetDedicated_r14_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
redirectedCarrierOffsetDedicated_r14_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
redirectedCarrierOffsetDedicated_r14_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
redirectedCarrierOffsetDedicated_r14_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
redirectedCarrierOffsetDedicated_r14_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
redirectedCarrierOffsetDedicated_r14_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
redirectedCarrierOffsetDedicated_r14_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
redirectedCarrierOffsetDedicated_r14_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
redirectedCarrierOffsetDedicated_r14_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
redirectedCarrierOffsetDedicated_r14_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
redirectedCarrierOffsetDedicated_r14_2_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td1);
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
redirectedCarrierOffsetDedicated_r14_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	redirectedCarrierOffsetDedicated_r14_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
t322_r14_19_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t322_r14_19_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

static void
t322_r14_19_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t322_r14_19_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t322_r14_19_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t322_r14_19_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t322_r14_19_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t322_r14_19_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t322_r14_19_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t322_r14_19_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
t322_r14_19_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
t322_r14_19_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	t322_r14_19_inherit_TYPE_descriptor(td1);
	t322_r14_19_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
t322_r14_19_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t322_r14_19_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_redirectedCarrierOffsetDedicated_r14_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t322_r14_constr_19 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_redirectedCarrierOffsetDedicated_r14_value2enum_2[] = {
	{ 0,	3,	"dB1" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB3" },
	{ 3,	3,	"dB4" },
	{ 4,	3,	"dB5" },
	{ 5,	3,	"dB6" },
	{ 6,	3,	"dB8" },
	{ 7,	4,	"dB10" },
	{ 8,	4,	"dB12" },
	{ 9,	4,	"dB14" },
	{ 10,	4,	"dB16" },
	{ 11,	4,	"dB18" },
	{ 12,	4,	"dB20" },
	{ 13,	4,	"dB22" },
	{ 14,	4,	"dB24" },
	{ 15,	4,	"dB26" }
};
static unsigned int asn_MAP_redirectedCarrierOffsetDedicated_r14_enum2value_2[] = {
	0,	/* dB1(0) */
	7,	/* dB10(7) */
	8,	/* dB12(8) */
	9,	/* dB14(9) */
	10,	/* dB16(10) */
	11,	/* dB18(11) */
	1,	/* dB2(1) */
	12,	/* dB20(12) */
	13,	/* dB22(13) */
	14,	/* dB24(14) */
	15,	/* dB26(15) */
	2,	/* dB3(2) */
	3,	/* dB4(3) */
	4,	/* dB5(4) */
	5,	/* dB6(5) */
	6	/* dB8(6) */
};
static asn_INTEGER_specifics_t asn_SPC_redirectedCarrierOffsetDedicated_r14_specs_2 = {
	asn_MAP_redirectedCarrierOffsetDedicated_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_redirectedCarrierOffsetDedicated_r14_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_redirectedCarrierOffsetDedicated_r14_2 = {
	"redirectedCarrierOffsetDedicated-r14",
	"redirectedCarrierOffsetDedicated-r14",
	redirectedCarrierOffsetDedicated_r14_2_free,
	redirectedCarrierOffsetDedicated_r14_2_print,
	redirectedCarrierOffsetDedicated_r14_2_constraint,
	redirectedCarrierOffsetDedicated_r14_2_decode_ber,
	redirectedCarrierOffsetDedicated_r14_2_encode_der,
	redirectedCarrierOffsetDedicated_r14_2_decode_xer,
	redirectedCarrierOffsetDedicated_r14_2_encode_xer,
	redirectedCarrierOffsetDedicated_r14_2_decode_uper,
	redirectedCarrierOffsetDedicated_r14_2_encode_uper,
	redirectedCarrierOffsetDedicated_r14_2_decode_aper,
	redirectedCarrierOffsetDedicated_r14_2_encode_aper,
	redirectedCarrierOffsetDedicated_r14_2_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2,
	sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2)
		/sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2)
		/sizeof(asn_DEF_redirectedCarrierOffsetDedicated_r14_tags_2[0]), /* 2 */
	&asn_PER_type_redirectedCarrierOffsetDedicated_r14_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_redirectedCarrierOffsetDedicated_r14_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_t322_r14_value2enum_19[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min180" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_t322_r14_enum2value_19[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	6,	/* min180(6) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* spare1(7) */
};
static asn_INTEGER_specifics_t asn_SPC_t322_r14_specs_19 = {
	asn_MAP_t322_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_t322_r14_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t322_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t322_r14_19 = {
	"t322-r14",
	"t322-r14",
	t322_r14_19_free,
	t322_r14_19_print,
	t322_r14_19_constraint,
	t322_r14_19_decode_ber,
	t322_r14_19_encode_der,
	t322_r14_19_decode_xer,
	t322_r14_19_encode_xer,
	t322_r14_19_decode_uper,
	t322_r14_19_encode_uper,
	t322_r14_19_decode_aper,
	t322_r14_19_encode_aper,
	t322_r14_19_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t322_r14_tags_19,
	sizeof(asn_DEF_t322_r14_tags_19)
		/sizeof(asn_DEF_t322_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_t322_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_t322_r14_tags_19)
		/sizeof(asn_DEF_t322_r14_tags_19[0]), /* 2 */
	&asn_PER_type_t322_r14_constr_19,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t322_r14_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_NB_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo_NB_v1430, redirectedCarrierOffsetDedicated_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_redirectedCarrierOffsetDedicated_r14_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"redirectedCarrierOffsetDedicated-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo_NB_v1430, t322_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t322_r14_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t322-r14"
		},
};
static ber_tlv_tag_t asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RedirectedCarrierInfo_NB_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* redirectedCarrierOffsetDedicated-r14 at 11497 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t322-r14 at 11500 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RedirectedCarrierInfo_NB_v1430_specs_1 = {
	sizeof(struct RedirectedCarrierInfo_NB_v1430),
	offsetof(struct RedirectedCarrierInfo_NB_v1430, _asn_ctx),
	asn_MAP_RedirectedCarrierInfo_NB_v1430_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_NB_v1430 = {
	"RedirectedCarrierInfo-NB-v1430",
	"RedirectedCarrierInfo-NB-v1430",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1,
	sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[0]), /* 1 */
	asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_NB_v1430_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RedirectedCarrierInfo_NB_v1430_1,
	2,	/* Elements count */
	&asn_SPC_RedirectedCarrierInfo_NB_v1430_specs_1	/* Additional specs */
};

