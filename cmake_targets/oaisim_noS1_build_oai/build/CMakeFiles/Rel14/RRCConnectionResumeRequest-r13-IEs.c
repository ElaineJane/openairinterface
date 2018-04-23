/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RRCConnectionResumeRequest-r13-IEs.h"

static int
memb_truncatedResumeID_r13_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 24)) {
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
memb_shortResumeMAC_I_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_spare_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_truncatedResumeID_r13_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_resumeIdentity_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_shortResumeMAC_I_r13_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_spare_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_resumeIdentity_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13, choice.resumeID_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResumeIdentity_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"resumeID-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13, choice.truncatedResumeID_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_truncatedResumeID_r13_constraint_2,
		&asn_PER_memb_truncatedResumeID_r13_constr_4,
		0,
		"truncatedResumeID-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_resumeIdentity_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resumeID-r13 at 1532 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* truncatedResumeID-r13 at 1533 */
};
static asn_CHOICE_specifics_t asn_SPC_resumeIdentity_r13_specs_2 = {
	sizeof(struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13),
	offsetof(struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13, _asn_ctx),
	offsetof(struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13, present),
	sizeof(((struct RRCConnectionResumeRequest_r13_IEs__resumeIdentity_r13 *)0)->present),
	asn_MAP_resumeIdentity_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resumeIdentity_r13_2 = {
	"resumeIdentity-r13",
	"resumeIdentity-r13",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_resumeIdentity_r13_constr_2,
	asn_MBR_resumeIdentity_r13_2,
	2,	/* Elements count */
	&asn_SPC_resumeIdentity_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionResumeRequest_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs, resumeIdentity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_resumeIdentity_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"resumeIdentity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs, shortResumeMAC_I_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_shortResumeMAC_I_r13_constraint_1,
		&asn_PER_memb_shortResumeMAC_I_r13_constr_5,
		0,
		"shortResumeMAC-I-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs, resumeCause_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResumeCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"resumeCause-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResumeRequest_r13_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_spare_constraint_1,
		&asn_PER_memb_spare_constr_7,
		0,
		"spare"
		},
};
static ber_tlv_tag_t asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeRequest_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resumeIdentity-r13 at 1532 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shortResumeMAC-I-r13 at 1535 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resumeCause-r13 at 1536 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare at 1537 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeRequest_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeRequest_r13_IEs),
	offsetof(struct RRCConnectionResumeRequest_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeRequest_r13_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_r13_IEs = {
	"RRCConnectionResumeRequest-r13-IEs",
	"RRCConnectionResumeRequest-r13-IEs",
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
	asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeRequest_r13_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionResumeRequest_r13_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCConnectionResumeRequest_r13_IEs_specs_1	/* Additional specs */
};

