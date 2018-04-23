/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SL-InterFreqInfoV2X-r14.h"

static int
sl_Bandwidth_r14_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
sl_Bandwidth_r14_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
sl_Bandwidth_r14_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
sl_Bandwidth_r14_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
sl_Bandwidth_r14_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
sl_Bandwidth_r14_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
sl_Bandwidth_r14_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
sl_Bandwidth_r14_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
sl_Bandwidth_r14_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
sl_Bandwidth_r14_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
sl_Bandwidth_r14_5_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
sl_Bandwidth_r14_5_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td1);
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
sl_Bandwidth_r14_5_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	sl_Bandwidth_r14_5_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_sl_Bandwidth_r14_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_sl_Bandwidth_r14_value2enum_5[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static unsigned int asn_MAP_sl_Bandwidth_r14_enum2value_5[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static asn_INTEGER_specifics_t asn_SPC_sl_Bandwidth_r14_specs_5 = {
	asn_MAP_sl_Bandwidth_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_Bandwidth_r14_enum2value_5,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_sl_Bandwidth_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_5 = {
	"sl-Bandwidth-r14",
	"sl-Bandwidth-r14",
	sl_Bandwidth_r14_5_free,
	sl_Bandwidth_r14_5_print,
	sl_Bandwidth_r14_5_constraint,
	sl_Bandwidth_r14_5_decode_ber,
	sl_Bandwidth_r14_5_encode_der,
	sl_Bandwidth_r14_5_decode_xer,
	sl_Bandwidth_r14_5_encode_xer,
	sl_Bandwidth_r14_5_decode_uper,
	sl_Bandwidth_r14_5_encode_uper,
	sl_Bandwidth_r14_5_decode_aper,
	sl_Bandwidth_r14_5_encode_aper,
	sl_Bandwidth_r14_5_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_sl_Bandwidth_r14_tags_5,
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_Bandwidth_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]), /* 2 */
	&asn_PER_type_sl_Bandwidth_r14_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_Bandwidth_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_InterFreqInfoV2X_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, plmn_IdentityList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_CommCarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-CommCarrierFreq-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_InterFreqInfoV2X_r14, sl_MaxTxPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-MaxTxPower-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_InterFreqInfoV2X_r14, sl_Bandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_Bandwidth_r14_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-Bandwidth-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_SchedulingPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePoolV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-SchedulingPool-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_UE_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_UE_ConfigList_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-UE-ConfigList-r14"
		},
};
static int asn_MAP_SL_InterFreqInfoV2X_r14_oms_1[] = { 0, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r14 at 10562 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommCarrierFreq-r14 at 10563 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-MaxTxPower-r14 at 10564 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-Bandwidth-r14 at 10565 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* v2x-SchedulingPool-r14 at 10566 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* v2x-UE-ConfigList-r14 at 10567 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_InterFreqInfoV2X_r14_specs_1 = {
	sizeof(struct SL_InterFreqInfoV2X_r14),
	offsetof(struct SL_InterFreqInfoV2X_r14, _asn_ctx),
	asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_InterFreqInfoV2X_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_InterFreqInfoV2X_r14 = {
	"SL-InterFreqInfoV2X-r14",
	"SL-InterFreqInfoV2X-r14",
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
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_InterFreqInfoV2X_r14_1,
	6,	/* Elements count */
	&asn_SPC_SL_InterFreqInfoV2X_r14_specs_1	/* Additional specs */
};

