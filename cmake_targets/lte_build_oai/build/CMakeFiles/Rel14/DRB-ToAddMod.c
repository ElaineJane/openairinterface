/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "DRB-ToAddMod.h"

static int
drb_TypeChange_r12_10_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
drb_TypeChange_r12_10_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
drb_TypeChange_r12_10_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
drb_TypeChange_r12_10_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
drb_TypeChange_r12_10_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
drb_TypeChange_r12_10_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
drb_TypeChange_r12_10_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
drb_TypeChange_r12_10_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
drb_TypeChange_r12_10_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
drb_TypeChange_r12_10_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
drb_TypeChange_r12_10_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
drb_TypeChange_r12_10_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td1);
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
drb_TypeChange_r12_10_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_TypeChange_r12_10_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
drb_TypeLWIP_r13_16_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
drb_TypeLWIP_r13_16_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
drb_TypeLWIP_r13_16_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
drb_TypeLWIP_r13_16_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
drb_TypeLWIP_r13_16_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
drb_TypeLWIP_r13_16_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
drb_TypeLWIP_r13_16_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
drb_TypeLWIP_r13_16_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
drb_TypeLWIP_r13_16_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
drb_TypeLWIP_r13_16_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
drb_TypeLWIP_r13_16_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td1);
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
drb_TypeLWIP_r13_16_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_TypeLWIP_r13_16_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
lwa_WLAN_AC_r14_25_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
lwa_WLAN_AC_r14_25_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
lwa_WLAN_AC_r14_25_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
lwa_WLAN_AC_r14_25_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
lwa_WLAN_AC_r14_25_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
lwa_WLAN_AC_r14_25_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
lwa_WLAN_AC_r14_25_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
lwa_WLAN_AC_r14_25_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
lwa_WLAN_AC_r14_25_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
lwa_WLAN_AC_r14_25_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
lwa_WLAN_AC_r14_25_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td1);
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
lwa_WLAN_AC_r14_25_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	lwa_WLAN_AC_r14_25_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_eps_BearerIdentity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_logicalChannelIdentity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_drb_TypeChange_r12_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drb_TypeLWIP_r13_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_lwa_WLAN_AC_r14_constr_25 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_drb_TypeChange_r12_value2enum_10[] = {
	{ 0,	5,	"toMCG" }
};
static unsigned int asn_MAP_drb_TypeChange_r12_enum2value_10[] = {
	0	/* toMCG(0) */
};
static asn_INTEGER_specifics_t asn_SPC_drb_TypeChange_r12_specs_10 = {
	asn_MAP_drb_TypeChange_r12_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeChange_r12_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_drb_TypeChange_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeChange_r12_10 = {
	"drb-TypeChange-r12",
	"drb-TypeChange-r12",
	drb_TypeChange_r12_10_free,
	drb_TypeChange_r12_10_print,
	drb_TypeChange_r12_10_constraint,
	drb_TypeChange_r12_10_decode_ber,
	drb_TypeChange_r12_10_encode_der,
	drb_TypeChange_r12_10_decode_xer,
	drb_TypeChange_r12_10_encode_xer,
	drb_TypeChange_r12_10_decode_uper,
	drb_TypeChange_r12_10_encode_uper,
	drb_TypeChange_r12_10_decode_aper,
	drb_TypeChange_r12_10_encode_aper,
	drb_TypeChange_r12_10_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_drb_TypeChange_r12_tags_10,
	sizeof(asn_DEF_drb_TypeChange_r12_tags_10)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_drb_TypeChange_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_drb_TypeChange_r12_tags_10)
		/sizeof(asn_DEF_drb_TypeChange_r12_tags_10[0]), /* 2 */
	&asn_PER_type_drb_TypeChange_r12_constr_10,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeChange_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext1, drb_TypeChange_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeChange_r12_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-TypeChange-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext1, rlc_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config-v1250"
		},
};
static int asn_MAP_ext1_oms_9[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-TypeChange-r12 at 5964 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rlc-Config-v1250 at 5965 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct DRB_ToAddMod__ext1),
	offsetof(struct DRB_ToAddMod__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_9 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_9,
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_9,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_drb_TypeLWIP_r13_value2enum_16[] = {
	{ 0,	4,	"lwip" },
	{ 1,	12,	"lwip-DL-only" },
	{ 2,	12,	"lwip-UL-only" },
	{ 3,	6,	"eutran" }
};
static unsigned int asn_MAP_drb_TypeLWIP_r13_enum2value_16[] = {
	3,	/* eutran(3) */
	0,	/* lwip(0) */
	1,	/* lwip-DL-only(1) */
	2	/* lwip-UL-only(2) */
};
static asn_INTEGER_specifics_t asn_SPC_drb_TypeLWIP_r13_specs_16 = {
	asn_MAP_drb_TypeLWIP_r13_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_TypeLWIP_r13_enum2value_16,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_drb_TypeLWIP_r13_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_TypeLWIP_r13_16 = {
	"drb-TypeLWIP-r13",
	"drb-TypeLWIP-r13",
	drb_TypeLWIP_r13_16_free,
	drb_TypeLWIP_r13_16_print,
	drb_TypeLWIP_r13_16_constraint,
	drb_TypeLWIP_r13_16_decode_ber,
	drb_TypeLWIP_r13_16_encode_der,
	drb_TypeLWIP_r13_16_decode_xer,
	drb_TypeLWIP_r13_16_encode_xer,
	drb_TypeLWIP_r13_16_decode_uper,
	drb_TypeLWIP_r13_16_encode_uper,
	drb_TypeLWIP_r13_16_decode_aper,
	drb_TypeLWIP_r13_16_encode_aper,
	drb_TypeLWIP_r13_16_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_drb_TypeLWIP_r13_tags_16,
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16[0]) - 1, /* 1 */
	asn_DEF_drb_TypeLWIP_r13_tags_16,	/* Same as above */
	sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16)
		/sizeof(asn_DEF_drb_TypeLWIP_r13_tags_16[0]), /* 2 */
	&asn_PER_type_drb_TypeLWIP_r13_constr_16,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_TypeLWIP_r13_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod__ext2, rlc_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext2, drb_TypeLWA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-TypeLWA-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext2, drb_TypeLWIP_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_TypeLWIP_r13_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-TypeLWIP-r13"
		},
};
static int asn_MAP_ext2_oms_13[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-v1310 at 5967 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-TypeLWA-r13 at 5968 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drb-TypeLWIP-r13 at 5969 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
	sizeof(struct DRB_ToAddMod__ext2),
	offsetof(struct DRB_ToAddMod__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_13,
	3,	/* Count of tags in the map */
	asn_MAP_ext2_oms_13,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
	"ext2",
	"ext2",
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
	asn_DEF_ext2_tags_13,
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_13,
	3,	/* Elements count */
	&asn_SPC_ext2_specs_13	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_lwa_WLAN_AC_r14_value2enum_25[] = {
	{ 0,	5,	"ac-bk" },
	{ 1,	5,	"ac-be" },
	{ 2,	5,	"ac-vi" },
	{ 3,	5,	"ac-vo" }
};
static unsigned int asn_MAP_lwa_WLAN_AC_r14_enum2value_25[] = {
	1,	/* ac-be(1) */
	0,	/* ac-bk(0) */
	2,	/* ac-vi(2) */
	3	/* ac-vo(3) */
};
static asn_INTEGER_specifics_t asn_SPC_lwa_WLAN_AC_r14_specs_25 = {
	asn_MAP_lwa_WLAN_AC_r14_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_lwa_WLAN_AC_r14_enum2value_25,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_lwa_WLAN_AC_r14_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lwa_WLAN_AC_r14_25 = {
	"lwa-WLAN-AC-r14",
	"lwa-WLAN-AC-r14",
	lwa_WLAN_AC_r14_25_free,
	lwa_WLAN_AC_r14_25_print,
	lwa_WLAN_AC_r14_25_constraint,
	lwa_WLAN_AC_r14_25_decode_ber,
	lwa_WLAN_AC_r14_25_encode_der,
	lwa_WLAN_AC_r14_25_decode_xer,
	lwa_WLAN_AC_r14_25_encode_xer,
	lwa_WLAN_AC_r14_25_decode_uper,
	lwa_WLAN_AC_r14_25_encode_uper,
	lwa_WLAN_AC_r14_25_decode_aper,
	lwa_WLAN_AC_r14_25_encode_aper,
	lwa_WLAN_AC_r14_25_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_lwa_WLAN_AC_r14_tags_25,
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25[0]) - 1, /* 1 */
	asn_DEF_lwa_WLAN_AC_r14_tags_25,	/* Same as above */
	sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25)
		/sizeof(asn_DEF_lwa_WLAN_AC_r14_tags_25[0]), /* 2 */
	&asn_PER_type_lwa_WLAN_AC_r14_constr_25,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lwa_WLAN_AC_r14_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_21[] = {
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod__ext3, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1430,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod__ext3, lwip_UL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lwip-UL-Aggregation-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod__ext3, lwip_DL_Aggregation_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lwip-DL-Aggregation-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod__ext3, lwa_WLAN_AC_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lwa_WLAN_AC_r14_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lwa-WLAN-AC-r14"
		},
};
static int asn_MAP_ext3_oms_21[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_ext3_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-v1430 at 5972 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lwip-UL-Aggregation-r14 at 5973 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lwip-DL-Aggregation-r14 at 5974 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lwa-WLAN-AC-r14 at 5975 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_21 = {
	sizeof(struct DRB_ToAddMod__ext3),
	offsetof(struct DRB_ToAddMod__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_21,
	4,	/* Count of tags in the map */
	asn_MAP_ext3_oms_21,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_21 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_21,
	sizeof(asn_DEF_ext3_tags_21)
		/sizeof(asn_DEF_ext3_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_21)
		/sizeof(asn_DEF_ext3_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_21,
	4,	/* Elements count */
	&asn_SPC_ext3_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, eps_BearerIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_eps_BearerIdentity_constraint_1,
		&asn_PER_memb_eps_BearerIdentity_constr_2,
		0,
		"eps-BearerIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-Identity"
		},
	{ ATF_POINTER, 7, offsetof(struct DRB_ToAddMod, pdcp_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Config"
		},
	{ ATF_POINTER, 6, offsetof(struct DRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config"
		},
	{ ATF_POINTER, 5, offsetof(struct DRB_ToAddMod, logicalChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_logicalChannelIdentity_constraint_1,
		&asn_PER_memb_logicalChannelIdentity_constr_6,
		0,
		"logicalChannelIdentity"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext2_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, ext3),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext3_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
};
static int asn_MAP_DRB_ToAddMod_oms_1[] = { 0, 2, 3, 4, 5, 6, 7, 8 };
static ber_tlv_tag_t asn_DEF_DRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity at 5957 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity at 5958 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Config at 5959 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config at 5960 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentity at 5961 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* logicalChannelConfig at 5962 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 at 5964 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext2 at 5967 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext3 at 5972 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1 = {
	sizeof(struct DRB_ToAddMod),
	offsetof(struct DRB_ToAddMod, _asn_ctx),
	asn_MAP_DRB_ToAddMod_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_oms_1,	/* Optional members */
	5, 3,	/* Root/Additions */
	5,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod = {
	"DRB-ToAddMod",
	"DRB-ToAddMod",
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
	asn_DEF_DRB_ToAddMod_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DRB_ToAddMod_1,
	9,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_specs_1	/* Additional specs */
};

