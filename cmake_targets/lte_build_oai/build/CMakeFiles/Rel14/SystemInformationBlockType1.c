/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SystemInformationBlockType1.h"

static int
cellBarred_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
cellBarred_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
cellBarred_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cellBarred_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cellBarred_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cellBarred_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cellBarred_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cellBarred_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
cellBarred_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
cellBarred_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
cellBarred_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
cellBarred_6_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	cellBarred_6_inherit_TYPE_descriptor(td1);
	cellBarred_6_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
cellBarred_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cellBarred_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
intraFreqReselection_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
intraFreqReselection_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
intraFreqReselection_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
intraFreqReselection_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
intraFreqReselection_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
intraFreqReselection_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
intraFreqReselection_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
intraFreqReselection_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
intraFreqReselection_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
intraFreqReselection_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
intraFreqReselection_9_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
intraFreqReselection_9_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	intraFreqReselection_9_inherit_TYPE_descriptor(td1);
	intraFreqReselection_9_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
intraFreqReselection_9_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	intraFreqReselection_9_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_q_RxLevMinOffset_constraint_14(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
si_WindowLength_21_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
si_WindowLength_21_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
si_WindowLength_21_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
si_WindowLength_21_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
si_WindowLength_21_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
si_WindowLength_21_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
si_WindowLength_21_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
si_WindowLength_21_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
si_WindowLength_21_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_WindowLength_21_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
si_WindowLength_21_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
si_WindowLength_21_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	si_WindowLength_21_inherit_TYPE_descriptor(td1);
	si_WindowLength_21_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
si_WindowLength_21_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_WindowLength_21_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_systemInfoValueTag_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_cellBarred_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_intraFreqReselection_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffset_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_WindowLength_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemInfoValueTag_constr_29 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_cellBarred_value2enum_6[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static unsigned int asn_MAP_cellBarred_enum2value_6[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static asn_INTEGER_specifics_t asn_SPC_cellBarred_specs_6 = {
	asn_MAP_cellBarred_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_cellBarred_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_6 = {
	"cellBarred",
	"cellBarred",
	cellBarred_6_free,
	cellBarred_6_print,
	cellBarred_6_constraint,
	cellBarred_6_decode_ber,
	cellBarred_6_encode_der,
	cellBarred_6_decode_xer,
	cellBarred_6_encode_xer,
	cellBarred_6_decode_uper,
	cellBarred_6_encode_uper,
	cellBarred_6_decode_aper,
	cellBarred_6_encode_aper,
	cellBarred_6_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cellBarred_tags_6,
	sizeof(asn_DEF_cellBarred_tags_6)
		/sizeof(asn_DEF_cellBarred_tags_6[0]) - 1, /* 1 */
	asn_DEF_cellBarred_tags_6,	/* Same as above */
	sizeof(asn_DEF_cellBarred_tags_6)
		/sizeof(asn_DEF_cellBarred_tags_6[0]), /* 2 */
	&asn_PER_type_cellBarred_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_intraFreqReselection_value2enum_9[] = {
	{ 0,	7,	"allowed" },
	{ 1,	10,	"notAllowed" }
};
static unsigned int asn_MAP_intraFreqReselection_enum2value_9[] = {
	0,	/* allowed(0) */
	1	/* notAllowed(1) */
};
static asn_INTEGER_specifics_t asn_SPC_intraFreqReselection_specs_9 = {
	asn_MAP_intraFreqReselection_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqReselection_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_intraFreqReselection_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqReselection_9 = {
	"intraFreqReselection",
	"intraFreqReselection",
	intraFreqReselection_9_free,
	intraFreqReselection_9_print,
	intraFreqReselection_9_constraint,
	intraFreqReselection_9_decode_ber,
	intraFreqReselection_9_encode_der,
	intraFreqReselection_9_decode_xer,
	intraFreqReselection_9_encode_xer,
	intraFreqReselection_9_decode_uper,
	intraFreqReselection_9_encode_uper,
	intraFreqReselection_9_decode_aper,
	intraFreqReselection_9_encode_aper,
	intraFreqReselection_9_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_intraFreqReselection_tags_9,
	sizeof(asn_DEF_intraFreqReselection_tags_9)
		/sizeof(asn_DEF_intraFreqReselection_tags_9[0]) - 1, /* 1 */
	asn_DEF_intraFreqReselection_tags_9,	/* Same as above */
	sizeof(asn_DEF_intraFreqReselection_tags_9)
		/sizeof(asn_DEF_intraFreqReselection_tags_9[0]), /* 2 */
	&asn_PER_type_intraFreqReselection_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqReselection_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, trackingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trackingAreaCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, cellBarred),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellBarred"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, intraFreqReselection),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqReselection_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqReselection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, csg_Indication),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-Indication"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, csg_Identity),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-Identity"
		},
};
static int asn_MAP_cellAccessRelatedInfo_oms_2[] = { 6 };
static ber_tlv_tag_t asn_DEF_cellAccessRelatedInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cellAccessRelatedInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList at 1889 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode at 1890 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellIdentity at 1891 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellBarred at 1892 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* intraFreqReselection at 1893 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csg-Indication at 1894 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* csg-Identity at 1895 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellAccessRelatedInfo_specs_2 = {
	sizeof(struct SystemInformationBlockType1__cellAccessRelatedInfo),
	offsetof(struct SystemInformationBlockType1__cellAccessRelatedInfo, _asn_ctx),
	asn_MAP_cellAccessRelatedInfo_tag2el_2,
	7,	/* Count of tags in the map */
	asn_MAP_cellAccessRelatedInfo_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfo_2 = {
	"cellAccessRelatedInfo",
	"cellAccessRelatedInfo",
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
	asn_DEF_cellAccessRelatedInfo_tags_2,
	sizeof(asn_DEF_cellAccessRelatedInfo_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfo_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cellAccessRelatedInfo_2,
	7,	/* Elements count */
	&asn_SPC_cellAccessRelatedInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellSelectionInfo_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1__cellSelectionInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxLevMin"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1__cellSelectionInfo, q_RxLevMinOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_q_RxLevMinOffset_constraint_14,
		&asn_PER_memb_q_RxLevMinOffset_constr_16,
		0,
		"q-RxLevMinOffset"
		},
};
static int asn_MAP_cellSelectionInfo_oms_14[] = { 1 };
static ber_tlv_tag_t asn_DEF_cellSelectionInfo_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cellSelectionInfo_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin at 1898 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-RxLevMinOffset at 1899 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellSelectionInfo_specs_14 = {
	sizeof(struct SystemInformationBlockType1__cellSelectionInfo),
	offsetof(struct SystemInformationBlockType1__cellSelectionInfo, _asn_ctx),
	asn_MAP_cellSelectionInfo_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_cellSelectionInfo_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellSelectionInfo_14 = {
	"cellSelectionInfo",
	"cellSelectionInfo",
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
	asn_DEF_cellSelectionInfo_tags_14,
	sizeof(asn_DEF_cellSelectionInfo_tags_14)
		/sizeof(asn_DEF_cellSelectionInfo_tags_14[0]) - 1, /* 1 */
	asn_DEF_cellSelectionInfo_tags_14,	/* Same as above */
	sizeof(asn_DEF_cellSelectionInfo_tags_14)
		/sizeof(asn_DEF_cellSelectionInfo_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cellSelectionInfo_14,
	2,	/* Elements count */
	&asn_SPC_cellSelectionInfo_specs_14	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_si_WindowLength_value2enum_21[] = {
	{ 0,	3,	"ms1" },
	{ 1,	3,	"ms2" },
	{ 2,	3,	"ms5" },
	{ 3,	4,	"ms10" },
	{ 4,	4,	"ms15" },
	{ 5,	4,	"ms20" },
	{ 6,	4,	"ms40" }
};
static unsigned int asn_MAP_si_WindowLength_enum2value_21[] = {
	0,	/* ms1(0) */
	3,	/* ms10(3) */
	4,	/* ms15(4) */
	1,	/* ms2(1) */
	5,	/* ms20(5) */
	6,	/* ms40(6) */
	2	/* ms5(2) */
};
static asn_INTEGER_specifics_t asn_SPC_si_WindowLength_specs_21 = {
	asn_MAP_si_WindowLength_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_si_WindowLength_enum2value_21,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_si_WindowLength_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_WindowLength_21 = {
	"si-WindowLength",
	"si-WindowLength",
	si_WindowLength_21_free,
	si_WindowLength_21_print,
	si_WindowLength_21_constraint,
	si_WindowLength_21_decode_ber,
	si_WindowLength_21_encode_der,
	si_WindowLength_21_decode_xer,
	si_WindowLength_21_encode_xer,
	si_WindowLength_21_decode_uper,
	si_WindowLength_21_encode_uper,
	si_WindowLength_21_decode_aper,
	si_WindowLength_21_encode_aper,
	si_WindowLength_21_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_si_WindowLength_tags_21,
	sizeof(asn_DEF_si_WindowLength_tags_21)
		/sizeof(asn_DEF_si_WindowLength_tags_21[0]) - 1, /* 1 */
	asn_DEF_si_WindowLength_tags_21,	/* Same as above */
	sizeof(asn_DEF_si_WindowLength_tags_21)
		/sizeof(asn_DEF_si_WindowLength_tags_21[0]), /* 2 */
	&asn_PER_type_si_WindowLength_constr_21,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_WindowLength_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, cellAccessRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellAccessRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, cellSelectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellSelectionInfo_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellSelectionInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-Max"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, freqBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"freqBandIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, schedulingInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"schedulingInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, tdd_Config),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, si_WindowLength),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_WindowLength_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"si-WindowLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1, systemInfoValueTag),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_systemInfoValueTag_constraint_1,
		&asn_PER_memb_systemInfoValueTag_constr_29,
		0,
		"systemInfoValueTag"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v890_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType1_oms_1[] = { 2, 5, 8 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellAccessRelatedInfo at 1889 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellSelectionInfo at 1898 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-Max at 1901 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqBandIndicator at 1902 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* schedulingInfoList at 1903 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tdd-Config at 1904 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* si-WindowLength at 1906 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* systemInfoValueTag at 1908 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension at 1909 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_specs_1 = {
	sizeof(struct SystemInformationBlockType1),
	offsetof(struct SystemInformationBlockType1, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1 = {
	"SystemInformationBlockType1",
	"SystemInformationBlockType1",
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
	asn_DEF_SystemInformationBlockType1_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType1_1,
	9,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_specs_1	/* Additional specs */
};

